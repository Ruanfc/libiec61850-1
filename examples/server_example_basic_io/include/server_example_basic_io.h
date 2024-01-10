#ifndef _SERVER_EXAMPLE_BASIC_IO_
#define _SERVER_EXAMPLE_BASIC_IO_
/* *INDENT-OFF* */
#ifdef __cplusplus
    extern "C" {
#endif

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#if defined(CONFIG_EXAMPLE_PORT)
#define PORT_SOCKET CONFIG_EXAMPLE_PORT
#endif
#ifndef CONFIG_EXAMPLE_PORT
#define PORT_SOCKET 102
#endif


static int running;
static IedServer iedServer;

void
sigint_handler(int signalId);

static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test);

static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter);

static void
rcbEventHandler(void* parameter, ReportControlBlock* rcb, ClientConnection connection, IedServer_RCBEventType event, const char* parameterName, MmsDataAccessError serviceError);

static void server_example_basic_io(void);

#ifdef __cplusplus
    }
#endif
#endif /*_SERVER_EXAMPLE_BASIC_IO_*/