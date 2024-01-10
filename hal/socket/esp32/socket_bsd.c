/*
 *  socket_bsd.c
 *
 *  Copyright 2013-2021 Michael Zillgith
 *
 *  This file is part of Platform Abstraction Layer (libpal)
 *  for libiec61850, libmms, and lib60870.
 */

#include "hal_socket.h"
// #include "sys/select.h"
#include "lwip/sockets.h"
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <netinet/in.h>
#include <netdb.h>
#include <errno.h>
#include <stdio.h>
#include <fcntl.h>

#include <netinet/tcp.h> // required for TCP keepalive

#include <signal.h>
#include <sys/poll.h> // not recommended

#include "linked_list.h"
#include "hal_thread.h"
#include "lib_memory.h"

#include "esp_netif.h"
#include "esp_log.h"

#if defined(CONFIG_EXAMPLE_IPV4)
#define HOST_IP_ADDR CONFIG_EXAMPLE_IPV4_ADDR
#elif defined(CONFIG_EXAMPLE_SOCKET_IP_INPUT_STDIN)
#define HOST_IP_ADDR ""
#endif
#define PORT CONFIG_EXAMPLE_PORT

#ifndef DEBUG_SOCKET
#define DEBUG_SOCKET 0
#endif

#ifndef MSG_NOSIGNAL
#define MSG_NOSIGNAL 0
#endif

#define PORT                        CONFIG_EXAMPLE_PORT
#define KEEPALIVE_IDLE              CONFIG_EXAMPLE_KEEPALIVE_IDLE
#define KEEPALIVE_INTERVAL          CONFIG_EXAMPLE_KEEPALIVE_INTERVAL
#define KEEPALIVE_COUNT             CONFIG_EXAMPLE_KEEPALIVE_COUNT
static const char *TAG = "socket_bsd";
static const char *payload = "Message from ESP32 ";

struct sSocket {
    int fd;
    uint32_t connectTimeout;
};

struct sServerSocket {
    int fd;
    int backLog;
};

struct sHandleSet {
    LinkedList sockets;
    bool pollfdIsUpdated;
    struct pollfd* fds;
    int nfds;
};

HandleSet
Handleset_new(void)
{
    HandleSet self = (HandleSet) GLOBAL_MALLOC(sizeof(struct sHandleSet));

    if (self) {
        self->sockets = LinkedList_create();
        self->pollfdIsUpdated = false;
        self->fds = NULL;
        self->nfds = 0;
    }

    return self;
}

void
Handleset_reset(HandleSet self)
{
    if (self) {
        if (self->sockets) {
            LinkedList_destroyStatic(self->sockets);
            self->sockets = LinkedList_create();
            self->pollfdIsUpdated = false;
        }
    }
}

void
Handleset_addSocket(HandleSet self, const Socket sock)
{
    if (self != NULL && sock != NULL && sock->fd != -1) {
        LinkedList_add(self->sockets, sock);
        self->pollfdIsUpdated = false;
    }
}

void
Handleset_removeSocket(HandleSet self, const Socket sock)
{
    if (self && self->sockets && sock) {
        LinkedList_remove(self->sockets, sock);
        self->pollfdIsUpdated = false;
    }
}

int
Handleset_waitReady(HandleSet self, unsigned int timeoutMs)
{
    /* check if pollfd array is updated */
    if (self->pollfdIsUpdated == false) {
        if (self->fds) {
            GLOBAL_FREEMEM(self->fds);
            self->fds = NULL;
        }

        self->nfds = LinkedList_size(self->sockets);

        self->fds = GLOBAL_CALLOC(self->nfds, sizeof(struct pollfd));

        int i;

        for (i = 0; i < self->nfds; i++) {
            LinkedList sockElem = LinkedList_get(self->sockets, i);

            if (sockElem) {
                Socket sock = (Socket) LinkedList_getData(sockElem);

                if (sock) {
                    self->fds[i].fd = sock->fd;
                    self->fds[i].events = POLLIN;
                }
            }
        }

        self->pollfdIsUpdated = true;
    }

    if (self->fds && self->nfds > 0) {
        int result = poll(self->fds, self->nfds, timeoutMs);

        if (result == -1) {
            if (DEBUG_SOCKET)
                printf("SOCKET: poll error (errno: %i)\n", errno);
        }

        return result;
    }
    else {
        /* there is no socket to wait for */
        return 0;
    }
}

void
Handleset_destroy(HandleSet self)
{
    if (self) {
        if (self->sockets)
            LinkedList_destroyStatic(self->sockets);

        if (self->fds)
            GLOBAL_FREEMEM(self->fds);

        GLOBAL_FREEMEM(self);
    }
}

void
Socket_activateTcpKeepAlive(Socket self, int idleTime, int interval, int count)
{
#if defined SO_KEEPALIVE
    int optval;
    socklen_t optlen = sizeof(optval);

    optval = 1;

    if (setsockopt(self->fd, SOL_SOCKET, SO_KEEPALIVE, &optval, optlen)) {
        if (DEBUG_SOCKET)
            printf("SOCKET: Failed to enable TCP keepalive\n");
    }

#if defined TCP_KEEPCNT
    optval = idleTime;
    if (setsockopt(self->fd, IPPROTO_TCP, TCP_KEEPIDLE, &optval, optlen)) {
        if (DEBUG_SOCKET)
            printf("SOCKET: Failed to set TCP keepalive TCP_KEEPIDLE parameter\n");
    }

    optval = interval;
    if (setsockopt(self->fd, IPPROTO_TCP, TCP_KEEPINTVL, &optval, optlen)) {
        if (DEBUG_SOCKET)
            printf("SOCKET: Failed to set TCP keepalive TCP_KEEPINTVL parameter\n");
    }

    optval = count;
    if (setsockopt(self->fd, IPPROTO_TCP, TCP_KEEPCNT, &optval, optlen)) {
        if (DEBUG_SOCKET)
            printf("SOCKET: Failed to set TCP keepalive TCP_KEEPCNT parameter\n");
    }
#endif /* TCP_KEEPCNT */

#endif /* SO_KEEPALIVE */
}

static bool
prepareAddress(const char* address, int port, struct sockaddr_in* sockaddr)
{

	memset((char *) sockaddr , 0, sizeof(struct sockaddr_in));

	if (address != NULL) {
		struct hostent *server;
		server = gethostbyname(address);

		if (server == NULL) return false;

		memcpy((char *) &sockaddr->sin_addr.s_addr, (char *) server->h_addr, server->h_length);
	}
	else
		sockaddr->sin_addr.s_addr = htonl(INADDR_ANY);

    sockaddr->sin_family = AF_INET;
    sockaddr->sin_port = htons(port);

    return true;
}

static void
setSocketNonBlocking(Socket self)
{
    int flags = fcntl(self->fd, F_GETFL, 0);
    fcntl(self->fd, F_SETFL, flags | O_NONBLOCK);
}

static void
activateTcpNoDelay(Socket self)
{
    /* activate TCP_NODELAY option - packets will be sent immediately */
    int flag = 1;
    setsockopt(self->fd, IPPROTO_TCP, TCP_NODELAY, (char *) &flag, sizeof(int));
}

ServerSocket
TcpServerSocket_create(const char* address, int port)
{
    ServerSocket serverSocket = NULL;

    char addr_str[128];
    int addr_family = (int)address; //pvParameters;
    int ip_protocol = 0;
    int keepAlive = 1;
    int keepIdle = KEEPALIVE_IDLE;
    int keepInterval = KEEPALIVE_INTERVAL;
    int keepCount = KEEPALIVE_COUNT;
    struct sockaddr_storage dest_addr;

    #ifdef CONFIG_EXAMPLE_IPV4
    if (addr_family == AF_INET) {
        struct sockaddr_in *dest_addr_ip4 = (struct sockaddr_in *)&dest_addr;
        dest_addr_ip4->sin_addr.s_addr = htonl(INADDR_ANY);
        dest_addr_ip4->sin_family = AF_INET;
        dest_addr_ip4->sin_port = htons(PORT);
        ip_protocol = IPPROTO_IP;
    }
    #endif
    #ifdef CONFIG_EXAMPLE_IPV6
    if (addr_family == AF_INET6) {
        struct sockaddr_in6 *dest_addr_ip6 = (struct sockaddr_in6 *)&dest_addr;
        bzero(&dest_addr_ip6->sin6_addr.un, sizeof(dest_addr_ip6->sin6_addr.un));
        dest_addr_ip6->sin6_family = AF_INET6;
        dest_addr_ip6->sin6_port = htons(PORT);
        ip_protocol = IPPROTO_IPV6;
    }
    #endif

    int fd;

    if ((fd = socket(addr_family, SOCK_STREAM, ip_protocol)) >= 0)
    {
        struct sockaddr_in serverAddress;

        if (!prepareAddress(address, port, &serverAddress)) {
            ESP_LOGE(TAG, "Unable to resolve 'prepareAddress'");
            close(fd);
            return NULL;
        }

        int optionReuseAddr = 1;
        setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, (char *) &optionReuseAddr, sizeof(int));
        #if defined(CONFIG_EXAMPLE_IPV4) && defined(CONFIG_EXAMPLE_IPV6)
        // Note that by default IPV6 binds to both protocols, it is must be disabled
         // if both protocols used at the same time (used in CI)
         setsockopt(listen_sock, IPPROTO_IPV6, IPV6_V6ONLY, &opt, sizeof(opt));
        #endif

        ESP_LOGI(TAG, "Socket created");

        if (bind(fd, (struct sockaddr *) &serverAddress, sizeof(serverAddress)) >= 0) {
            serverSocket = (ServerSocket) GLOBAL_MALLOC(sizeof(struct sServerSocket));
            serverSocket->fd = fd;
            serverSocket->backLog = 2;

            setSocketNonBlocking((Socket) serverSocket);
        }
        else {
            ESP_LOGE(TAG, "Unable to create socket: errno %d", errno);
            ESP_LOGE(TAG, "IPPROTO: %d", addr_family);
            close(fd);
            return NULL ;
        }
        ESP_LOGI(TAG, "Socket bound, port %d", PORT);
    }else //socket()
    {
       ESP_LOGE(TAG, "Unable to create socket: errno %d", errno); 
    }

    return serverSocket;
}

void
ServerSocket_listen(ServerSocket self)
{
    int err = listen(self->fd, self->backLog);
    ESP_LOGE(TAG, "Error occurred during listen: errno %d", errno);
    close(self->fd);
}


/* CHANGED TO MAKE NON-BLOCKING --> RETURNS NULL IF NO CONNECTION IS PENDING */
Socket
ServerSocket_accept(ServerSocket self)
{
    int fd;

    Socket conSocket = NULL;

    fd = accept(self->fd, NULL, NULL );

    if (fd >= 0) {
        conSocket = (Socket) GLOBAL_CALLOC(1, sizeof(struct sSocket));

        if (conSocket) {
            conSocket->fd = fd;

            setSocketNonBlocking(conSocket);

            activateTcpNoDelay(conSocket);
        }
        else {
            /* out of memory */
            close(fd);

            if (DEBUG_SOCKET)
                printf("SOCKET: out of memory\n");
        }
    }

    return conSocket;
}

void
ServerSocket_setBacklog(ServerSocket self, int backlog)
{
    self->backLog = backlog;
}

static void
closeAndShutdownSocket(int socketFd)
{
    if (socketFd != -1) {

        if (DEBUG_SOCKET)
            printf("socket_linux.c: call shutdown for %i!\n", socketFd);

        /* shutdown is required to unblock read or accept in another thread! */
        shutdown(socketFd, SHUT_RDWR);

        close(socketFd);
    }
}

void
ServerSocket_destroy(ServerSocket self)
{
    int fd = self->fd;

    self->fd = -1;

    closeAndShutdownSocket(fd);

    Thread_sleep(10);

    GLOBAL_FREEMEM(self);
}

Socket
TcpSocket_create()
{
    Socket self = (Socket)NULL;
    char rx_buffer[128];
    char host_ip[] = HOST_IP_ADDR;
    int addr_family = 0;
    int ip_protocol = 0;

    #if defined(CONFIG_EXAMPLE_IPV4)
        struct sockaddr_in dest_addr;
        inet_pton(AF_INET, host_ip, &dest_addr.sin_addr);
        dest_addr.sin_family = AF_INET;
        dest_addr.sin_port = htons(PORT);
        addr_family = AF_INET;
        ip_protocol = IPPROTO_IP;
    #elif defined(CONFIG_EXAMPLE_SOCKET_IP_INPUT_STDIN)
        struct sockaddr_storage dest_addr = { 0 };
        ESP_ERROR_CHECK(get_addr_from_stdin(PORT, SOCK_STREAM, &ip_protocol, &addr_family, &dest_addr));
    #endif

    int sock =  socket(addr_family, SOCK_STREAM, ip_protocol);
    if (sock == -1)
    // if (sock < 0)
    {
        ESP_LOGE(TAG, "Unable to create socket: errno %d", errno);
        //break;
        /* out of memory */
        close(sock);

        if (DEBUG_SOCKET)
            printf("SOCKET: out of memory\n");
    }
    else
    {
        self = (Socket) GLOBAL_MALLOC(sizeof(struct sSocket));
        if (self)
        {
            self->fd = sock;
            self->connectTimeout = 5000;

            #if 0
            int tcpUserTimeout = 10000;
            int result = setsockopt(sock, SOL_TCP,  TCP_USER_TIMEOUT, &tcpUserTimeout, sizeof(tcpUserTimeout));
            #endif
        }
        else { 
            if (DEBUG_SOCKET)
                printf("SOCKET: failed to create socket (errno=%i)\n", errno);
        }
            // ESP_LOGI(TAG, "Socket created, connecting to %s:%d", host_ip, PORT);
    }
    return self;
}

void
Socket_setConnectTimeout(Socket self, uint32_t timeoutInMs)
{
    self->connectTimeout = timeoutInMs;
}

bool
Socket_bind(Socket self, const char* srcAddress, int srcPort)
{
    struct sockaddr_in localAddress;

    if (!prepareAddress(srcAddress, srcPort, &localAddress))
        return false;

    int result = bind(self->fd, (struct sockaddr*)&localAddress, sizeof(localAddress));

    if (result == -1) {
        if (DEBUG_SOCKET)
            printf("SOCKET: failed to bind TCP socket (errno=%i)\n", errno);

        close(self->fd);
        self->fd = -1;

        return false;
    }    

    return true;
}

bool
Socket_connectAsync(Socket self, const char* address, int port)
{
    struct sockaddr_in serverAddress;

    if (DEBUG_SOCKET)
        printf("SOCKET: connect: %s:%i\n", address, port);

    if (!prepareAddress(address, port, &serverAddress))
        return false;

    fd_set fdSet;
    FD_ZERO(&fdSet);
    FD_SET(self->fd, &fdSet);

    activateTcpNoDelay(self);

    fcntl(self->fd, F_SETFL, O_NONBLOCK);

    if (connect(self->fd, (struct sockaddr *) &serverAddress, sizeof(serverAddress)) < 0) {
        ESP_LOGE(TAG, "Socket unable to connect: errno %d", errno);
        if (errno != EINPROGRESS) {
            self->fd = -1;
            return false;
        }
    }

    return true; /* is connecting or already connected */
}

SocketState
Socket_checkAsyncConnectState(Socket self)
{
    struct timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;

    fd_set fdSet;
    FD_ZERO(&fdSet);
    FD_SET(self->fd, &fdSet);

    int selectVal = select(self->fd + 1, NULL, &fdSet , NULL, &timeout);

    if (selectVal == 1) {

        /* Check if connection is established */

        int so_error;
        socklen_t len = sizeof so_error;

        if (getsockopt(self->fd, SOL_SOCKET, SO_ERROR, &so_error, &len) >= 0) {

            if (so_error == 0)
                return SOCKET_STATE_CONNECTED;
        }

        return SOCKET_STATE_FAILED;
    }
    else if (selectVal == 0) {
        return SOCKET_STATE_CONNECTING;
    }
    else {
        return SOCKET_STATE_FAILED;
    }
}

bool
Socket_connect(Socket self, const char* address, int port)
{
    if (Socket_connectAsync(self, address, port) == false)
        return false;

    struct timeval timeout;
    timeout.tv_sec = self->connectTimeout / 1000;
    timeout.tv_usec = (self->connectTimeout % 1000) * 1000;

    fd_set fdSet;
    FD_ZERO(&fdSet);
    FD_SET(self->fd, &fdSet);

    if (select(self->fd + 1, NULL, &fdSet , NULL, &timeout) == 1) {

        /* Check if connection is established */

        int so_error;
        socklen_t len = sizeof so_error;

        if (getsockopt(self->fd, SOL_SOCKET, SO_ERROR, &so_error, &len) >= 0) {

            if (so_error == 0)
                return true;
        }
    }

    close (self->fd);
    self->fd = -1;

    return false;
}

static char*
convertAddressToStr(struct sockaddr_storage* addr)
{
    char addrString[INET6_ADDRSTRLEN + 7];
    int port;

    bool isIPv6;

    if (addr->ss_family == AF_INET) {
        struct sockaddr_in* ipv4Addr = (struct sockaddr_in*) addr;
        port = ntohs(ipv4Addr->sin_port);
        inet_ntop(AF_INET, &(ipv4Addr->sin_addr), addrString, INET_ADDRSTRLEN);
        isIPv6 = false;
    }
    else if (addr->ss_family == AF_INET6) {
        struct sockaddr_in6* ipv6Addr = (struct sockaddr_in6*) addr;
        port = ntohs(ipv6Addr->sin6_port);
        inet_ntop(AF_INET6, &(ipv6Addr->sin6_addr), addrString, INET6_ADDRSTRLEN);
        isIPv6 = true;
    }
    else
        return NULL ;

    char* clientConnection = (char*) GLOBAL_MALLOC(strlen(addrString) + 9);

    if (isIPv6)
        sprintf(clientConnection, "[%s]:%i", addrString, port);
    else
        sprintf(clientConnection, "%s:%i", addrString, port);

    return clientConnection;
}

char*
Socket_getPeerAddress(Socket self)
{
    struct sockaddr_storage addr;
    socklen_t addrLen = sizeof(addr);

    if (getpeername(self->fd, (struct sockaddr*) &addr, &addrLen) == 0) {
        return convertAddressToStr(&addr);
    }
    else
        return NULL;
}

char*
Socket_getLocalAddress(Socket self)
{
    struct sockaddr_storage addr;
    socklen_t addrLen = sizeof(addr);

    if (getsockname(self->fd, (struct sockaddr*) &addr, &addrLen) == 0) {
        return convertAddressToStr(&addr);
    }
    else
        return NULL;
}

char*
Socket_getPeerAddressStatic(Socket self, char* peerAddressString)
{
    struct sockaddr_storage addr;
    socklen_t addrLen = sizeof(addr);

    getpeername(self->fd, (struct sockaddr*) &addr, &addrLen);

    char addrString[INET6_ADDRSTRLEN + 7];
    int port;

    bool isIPv6;

    if (addr.ss_family == AF_INET) {
        struct sockaddr_in* ipv4Addr = (struct sockaddr_in*) &addr;
        port = ntohs(ipv4Addr->sin_port);
        inet_ntop(AF_INET, &(ipv4Addr->sin_addr), addrString, INET_ADDRSTRLEN);
        isIPv6 = false;
    }
    else if (addr.ss_family == AF_INET6) {
        struct sockaddr_in6* ipv6Addr = (struct sockaddr_in6*) &addr;
        port = ntohs(ipv6Addr->sin6_port);
        inet_ntop(AF_INET6, &(ipv6Addr->sin6_addr), addrString, INET6_ADDRSTRLEN);
        isIPv6 = true;
    }
    else
        return NULL ;

    if (isIPv6)
        sprintf(peerAddressString, "[%s]:%i", addrString, port);
    else
        sprintf(peerAddressString, "%s:%i", addrString, port);

    return peerAddressString;
}

int
Socket_read(Socket self, uint8_t* buf, int size)
{
    if (self->fd == -1)
        return -1;

    int read_bytes = recv(self->fd, buf, size, MSG_DONTWAIT);

    if (read_bytes == 0)
        return -1;

    if (read_bytes == -1) {
        int error = errno;

        switch (error) {

            case EAGAIN:
                return 0;
            case EBADF:
                return -1;

            default:
                return -1;
        }
    }

    return read_bytes;
}

int
Socket_write(Socket self, uint8_t* buf, int size)
{
    if (self->fd == -1)
        return -1;

    /* MSG_NOSIGNAL - prevent send to signal SIGPIPE when peer unexpectedly closed the socket */
    int retVal = send(self->fd, buf, size, MSG_NOSIGNAL | MSG_DONTWAIT);

    if ((retVal == -1) && (errno == EAGAIN))
        return 0;
    else
        return retVal;
}

void
Socket_destroy(Socket self)
{
    int fd = self->fd;

    self->fd = -1;

    closeAndShutdownSocket(fd);

    Thread_sleep(10);

    GLOBAL_FREEMEM(self);
}
