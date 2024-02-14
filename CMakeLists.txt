cmake_minimum_required(VERSION 3.16)

# automagically detect if we should cross-compile
if(DEFINED ENV{TOOLCHAIN})
    set(CMAKE_C_COMPILER	$ENV{TOOLCHAIN}gcc)
    set(CMAKE_CXX_COMPILER	$ENV{TOOLCHAIN}g++)
    set(CMAKE_AR	"$ENV{TOOLCHAIN}ar" CACHE FILEPATH "CW archiver" FORCE)
endif()

project(libiec61850)
ENABLE_TESTING()

if($ENV{TOOLCHAIN} MATCHES ".*xtensa-esp.*")
    set(ESP32 1)
    set(CMAKE_SYSTEM_NAME "Generic")
    # TARGET must be defined else use a default one
    set(targets "esp32" "esp32s2" "esp32s3" "esp32c3" "esp32c2" "esp32c6" "esp32h2" "esp32p4")
    IF("${TARGET}" IN_LIST targets)
    ELSE()
        message(STATUS "Unknown target ${TARGET}, substutuiting for esp32s3")
        set(TARGET "esp32s3")
    ENDIF()
endif()

set(LIB_VERSION_MAJOR "1")
set(LIB_VERSION_MINOR "5")
set(LIB_VERSION_PATCH "3")
set(LIB_VERSION "${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${LIB_VERSION_PATCH}")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/third_party/cmake/modules/")

# feature checks
include(CheckLibraryExists)
check_library_exists(rt clock_gettime "time.h" CONFIG_SYSTEM_HAS_CLOCK_GETTIME)

# check if we are on a little or a big endian
include (TestBigEndian)
test_big_endian(PLATFORM_IS_BIGENDIAN)

set(CONFIG_MMS_MAXIMUM_PDU_SIZE "65000" CACHE STRING "Configure the maximum size of an MMS PDU (default 65000)"   )
set(CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS 5 CACHE STRING "Configure the maximum number of clients allowed to connect to the server")

option(BUILD_EXAMPLES "Build the examples" OFF)
option(BUILD_PYTHON_BINDINGS "Build Python bindings" OFF)

option(CONFIG_MMS_SINGLE_THREADED "Compile for single threaded version" ON)
option(CONFIG_MMS_THREADLESS_STACK "Optimize stack for threadless operation (warning: single- or multi-threaded server will not work!)" OFF)
set(CONFIG_MMS_SERVER_MAX_GET_FILE_TASKS 5 CACHE STRING "Configure the maximum number of get file tasks")
set(CONFIG_MMS_MAX_NUMBER_OF_DATA_SET_MEMBERS 100 CACHE STRING "Configure the maximum number of dataSet members")

option(CONFIG_ACTIVATE_TCP_KEEPALIVE "Activate TCP keepalive" ON)
option(CONFIG_INCLUDE_GOOSE_SUPPORT "Build with GOOSE support" OFF)

option(CONFIG_USE_EXTERNAL_MBEDTLS_DYNLIB "Build with pre-compiled mbedtls dynamic library" OFF)

set(CONFIG_EXTERNAL_MBEDTLS_DYNLIB_PATH "${CMAKE_CURRENT_LIST_DIR}/third_party/mbedtls/mbedtls-2.28/library" CACHE STRING "Path to search for the mbedtls dynamic libraries" )
set(CONFIG_EXTERNAL_MBEDTLS_INCLUDE_PATH "${CMAKE_CURRENT_LIST_DIR}/third_party/mbedtls/mbedtls-2.28/include" CACHE STRING "Path to search for the mbedtls include files" )

# choose the library features which shall be included
option(CONFIG_IEC61850_CONTROL_SERVICE "Build with support for IEC 61850 control features" ON)
option(CONFIG_IEC61850_REPORT_SERVICE "Build with support for IEC 61850 reporting services" ON)
option(CONFIG_IEC61850_LOG_SERVICE "Build with support for IEC 61850 logging services" ON)
option(CONFIG_IEC61850_SERVICE_TRACKING "Build with support for IEC 61850 service tracking" ON)
option(CONFIG_IEC61850_SETTING_GROUPS "Build with support for IEC 61850 setting group services" ON)
option(CONFIG_IEC61850_SUPPORT_USER_READ_ACCESS_CONTROL "Allow user provided callback to control read access" ON)
option(CONFIG_IEC61850_RCB_ALLOW_ONLY_PRECONFIGURED_CLIENT "allow only configured clients (when pre-configured by ClientLN)" OFF)
set(CONFIG_IEC61850_SG_RESVTMS 300 CACHE STRING "Configure the maximum number of SG RESVTMS")

set(CONFIG_REPORTING_DEFAULT_REPORT_BUFFER_SIZE "65536" CACHE STRING "Default buffer size for buffered reports in byte" )

# advanced options
option(DEBUG "Enable debugging mode (include assertions)" OFF)
option(DEBUG_SOCKET "Enable printf debugging for socket layer" ${DEBUG})
option(DEBUG_COTP "Enable COTP printf debugging" ${DEBUG})
option(DEBUG_ISO_SERVER "Enable ISO SERVER printf debugging" ${DEBUG})
option(DEBUG_ISO_CLIENT "Enable ISO CLIENT printf debugging" ${DEBUG})
option(DEBUG_IED_SERVER "Enable IED SERVER printf debugging" ${DEBUG})
option(DEBUG_IED_CLIENT "Enable IED CLIENT printf debugging" ${DEBUG})
option(DEBUG_MMS_SERVER "Enable MMS SERVER printf debugging" ${DEBUG})
option(DEBUG_MMS_CLIENT "Enable MMS CLIENT printf debugging" ${DEBUG})
option(DEBUG_GOOSE_SUBSCRIBER "Enable GOOSE subscriber printf debugging" ${DEBUG})
option(DEBUG_GOOSE_PUBLISHER "Enable GOOSE publisher printf debugging" ${DEBUG})
option(DEBUG_SV_SUBSCRIBER "Enable Sampled Values subscriber debugging" ${DEBUG})
option(DEBUG_SV_PUBLISHER "Enable Sampled Values publisher debugging" ${DEBUG})
option(DEBUG_HAL_ETHERNET "Enable Ethernet HAL printf debugging" ${DEBUG})

include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}/config
    ${CMAKE_CURRENT_LIST_DIR}/src/common/inc
    ${CMAKE_CURRENT_LIST_DIR}/src/goose
    ${CMAKE_CURRENT_LIST_DIR}/src/sampled_values
    ${CMAKE_CURRENT_LIST_DIR}/src/hal/inc
    ${CMAKE_CURRENT_LIST_DIR}/src/iec61850/inc
    ${CMAKE_CURRENT_LIST_DIR}/src/iec61850/inc_private
    ${CMAKE_CURRENT_LIST_DIR}/src/mms/inc
    ${CMAKE_CURRENT_LIST_DIR}/src/mms/inc_private
    ${CMAKE_CURRENT_LIST_DIR}/src/mms/iso_mms/asn1c
    ${CMAKE_CURRENT_LIST_DIR}/src/logging
)

set(API_HEADERS
    hal/inc/hal_base.h
    hal/inc/hal_time.h
    hal/inc/hal_thread.h
    hal/inc/hal_filesystem.h
    hal/inc/hal_ethernet.h
    hal/inc/hal_socket.h
    hal/inc/tls_config.h
    src/common/inc/libiec61850_common_api.h
    src/common/inc/linked_list.h
    src/iec61850/inc/iec61850_client.h
    src/iec61850/inc/iec61850_common.h
    src/iec61850/inc/iec61850_server.h
    src/iec61850/inc/iec61850_model.h
    src/iec61850/inc/iec61850_cdc.h
    src/iec61850/inc/iec61850_dynamic_model.h
    src/iec61850/inc/iec61850_config_file_parser.h
    src/mms/inc/mms_value.h
    src/mms/inc/mms_common.h
    src/mms/inc/mms_types.h
    src/mms/inc/mms_type_spec.h
    src/mms/inc/mms_client_connection.h
    src/mms/inc/mms_server.h
    src/mms/inc/iso_connection_parameters.h
    src/goose/goose_subscriber.h
    src/goose/goose_receiver.h
    src/goose/goose_publisher.h
    src/sampled_values/sv_subscriber.h
    src/sampled_values/sv_publisher.h
    src/logging/logging_api.h
)

if(MSVC AND MSVC_VERSION LESS 1800)
    include_directories(
        ${CMAKE_CURRENT_LIST_DIR}/src/vs
    )
endif(MSVC AND MSVC_VERSION LESS 1800)

if(CONFIG_USE_EXTERNAL_MBEDTLS_DYNLIB)
set(WITH_MBEDTLS 1)
set(USE_PREBUILD_MBEDTLS 1)
set(MBEDTLS_INCLUDE_DIR ${CONFIG_EXTERNAL_MBEDTLS_INCLUDE_PATH})
endif(CONFIG_USE_EXTERNAL_MBEDTLS_DYNLIB)

if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/third_party/mbedtls/mbedtls-2.28)
set(WITH_MBEDTLS 1)
set(MBEDTLS_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/third_party/mbedtls/mbedtls-2.28/include")
endif(EXISTS ${CMAKE_CURRENT_LIST_DIR}/third_party/mbedtls/mbedtls-2.28)

if(WITH_MBEDTLS)

add_definitions(-DCONFIG_MMS_SUPPORT_TLS=1)

endif(WITH_MBEDTLS)

include(CheckCCompilerFlag)

check_c_compiler_flag("-Wredundant-decls" SUPPORT_REDUNDANT_DECLS)
# if (SUPPORT_REDUNDANT_DECLS)
#     set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wredundant-decls")
# endif(SUPPORT_REDUNDANT_DECLS)

# write the detected stuff to this file
configure_file(
    ${CMAKE_CURRENT_LIST_DIR}/config/stack_config.h.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/config/stack_config.h
)

if (ESP32) #build process
    include($ENV{IDF_PATH}/tools/cmake/idf.cmake)
    idf_build_component($ENV{IDF_PATH}/examples/common_components/protocol_examples_common)
    idf_build_component(${CMAKE_CURRENT_LIST_DIR}/kcomp)
    set(components
        freertos esptool_py esp_wifi
        newlib
        esp_system
        esp_event
        log
        esp_common
        esp_hw_support
        nvs_flash
        protocol_examples_common
        esp_netif
        lwip
        console
        kcomp
        esp_gdbstub
        esp_psram
    )
    idf_build_process("${TARGET}"
        COMPONENTS ${components}
        BUILD_DIR ${CMAKE_BINARY_DIR}
    )
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif(ESP32)

include_directories(
	${CMAKE_CURRENT_LIST_DIR}/hal/inc
)

if(!ESP32) #HALL
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/hal")
else()

    set (libhal_esp32_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/hal/socket/esp32/socket_bsd.c
    #${CMAKE_CURRENT_LIST_DIR}/hal/ethernet/esp32/ethernet_linux.c
    ${CMAKE_CURRENT_LIST_DIR}/hal/thread/linux/thread_linux.c
    ${CMAKE_CURRENT_LIST_DIR}/hal/filesystem/esp32/file_provider_linux.c
    ${CMAKE_CURRENT_LIST_DIR}/hal/time/unix/time.c
    ${CMAKE_CURRENT_LIST_DIR}/hal/serial/esp32/serial_port_linux.c
    ${CMAKE_CURRENT_LIST_DIR}/hal/memory/lib_memory.c
    )

    set (libhal_SRCS
        ${libhal_esp32_SRCS}
        )

    add_library (hal STATIC ${libhal_SRCS})
    target_compile_options(hal PRIVATE "-mlongcalls")
    target_compile_options(hal PRIVATE "-mfix-esp32-psram-cache-issue")
    target_link_libraries(hal
        idf::lwip
        idf::esp_netif
        idf::esp_wifi
        idf::vfs
        idf::newlib
    )
endif(!ESP32) #HALL

if(DEBUG)
	set(CMAKE_BUILD_TYPE Debug)
endif(DEBUG)

if(BUILD_EXAMPLES)
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/examples)
endif(BUILD_EXAMPLES)

if(!ESP32) #SRC
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/src)
else()
    set (lib_common_SRCS
    ./src/common/string_map.c
    ./src/common/map.c
    ./src/common/linked_list.c
    ./src/common/byte_buffer.c
    ./src/common/string_utilities.c
    ./src/common/buffer_chain.c
    ./src/common/conversions.c
    ./src/common/mem_alloc_linked_list.c
    ./src/common/simple_allocator.c
    ./src/mms/iso_server/iso_connection.c
    ./src/mms/iso_server/iso_server.c
    ./src/mms/iso_acse/acse.c
    ./src/mms/iso_mms/common/mms_type_spec.c
    ./src/mms/iso_mms/common/mms_value.c
    ./src/mms/iso_mms/common/mms_common_msg.c
    ./src/mms/iso_mms/client/mms_client_initiate.c
    ./src/mms/iso_mms/client/mms_client_write.c
    ./src/mms/iso_mms/client/mms_client_identify.c
    ./src/mms/iso_mms/client/mms_client_status.c
    ./src/mms/iso_mms/client/mms_client_named_variable_list.c
    ./src/mms/iso_mms/client/mms_client_connection.c
    ./src/mms/iso_mms/client/mms_client_files.c
    ./src/mms/iso_mms/client/mms_client_get_namelist.c
    ./src/mms/iso_mms/client/mms_client_get_var_access.c
    ./src/mms/iso_mms/client/mms_client_common.c
    ./src/mms/iso_mms/client/mms_client_read.c
    ./src/mms/iso_mms/client/mms_client_journals.c
    ./src/mms/iso_mms/server/mms_read_service.c
    ./src/mms/iso_mms/server/mms_file_service.c
    ./src/mms/iso_mms/server/mms_association_service.c
    ./src/mms/iso_mms/server/mms_identify_service.c
    ./src/mms/iso_mms/server/mms_status_service.c
    ./src/mms/iso_mms/server/mms_named_variable_list_service.c
    ./src/mms/iso_mms/server/mms_value_cache.c
    ./src/mms/iso_mms/server/mms_get_namelist_service.c
    ./src/mms/iso_mms/server/mms_access_result.c
    ./src/mms/iso_mms/server/mms_server.c
    ./src/mms/iso_mms/server/mms_server_common.c
    ./src/mms/iso_mms/server/mms_named_variable_list.c
    ./src/mms/iso_mms/server/mms_domain.c
    ./src/mms/iso_mms/server/mms_device.c
    ./src/mms/iso_mms/server/mms_information_report.c
    ./src/mms/iso_mms/server/mms_journal.c
    ./src/mms/iso_mms/server/mms_journal_service.c
    ./src/mms/iso_mms/server/mms_server_connection.c
    ./src/mms/iso_mms/server/mms_write_service.c
    ./src/mms/iso_mms/server/mms_get_var_access_service.c
    ./src/mms/iso_cotp/cotp.c
    ./src/mms/iso_presentation/iso_presentation.c
    ./src/mms/asn1/ber_decode.c
    ./src/mms/asn1/asn1_ber_primitive_value.c
    ./src/mms/asn1/ber_encoder.c
    ./src/mms/asn1/ber_integer.c
    ./src/mms/iso_client/iso_client_connection.c
    ./src/mms/iso_common/iso_connection_parameters.c
    ./src/mms/iso_session/iso_session.c
    ./src/iec61850/client/client_control.c
    ./src/iec61850/client/client_report_control.c
    ./src/iec61850/client/client_goose_control.c
    ./src/iec61850/client/client_sv_control.c
    ./src/iec61850/client/client_report.c
    ./src/iec61850/client/ied_connection.c
    ./src/iec61850/common/iec61850_common.c
    ./src/iec61850/server/impl/ied_server.c
    ./src/iec61850/server/impl/ied_server_config.c
    ./src/iec61850/server/impl/client_connection.c
    ./src/iec61850/server/model/model.c
    ./src/iec61850/server/model/dynamic_model.c
    ./src/iec61850/server/model/cdc.c
    ./src/iec61850/server/model/config_file_parser.c
    ./src/iec61850/server/mms_mapping/control.c
    ./src/iec61850/server/mms_mapping/mms_mapping.c
    ./src/iec61850/server/mms_mapping/reporting.c
    ./src/iec61850/server/mms_mapping/mms_goose.c
    ./src/iec61850/server/mms_mapping/mms_sv.c
    ./src/iec61850/server/mms_mapping/logging.c
    ./src/logging/log_storage.c
    )

    set (lib_asn1c_SRCS
    ./src/mms/iso_mms/asn1c/DataAccessError.c
    ./src/mms/iso_mms/asn1c/DeleteNamedVariableListRequest.c
    ./src/mms/iso_mms/asn1c/constr_SET_OF.c
    ./src/mms/iso_mms/asn1c/MmsPdu.c
    ./src/mms/iso_mms/asn1c/GetNamedVariableListAttributesResponse.c
    ./src/mms/iso_mms/asn1c/BIT_STRING.c
    ./src/mms/iso_mms/asn1c/ber_tlv_tag.c
    ./src/mms/iso_mms/asn1c/constr_SEQUENCE_OF.c
    ./src/mms/iso_mms/asn1c/asn_SET_OF.c
    ./src/mms/iso_mms/asn1c/ReadResponse.c
    ./src/mms/iso_mms/asn1c/InformationReport.c
    ./src/mms/iso_mms/asn1c/ConfirmedServiceRequest.c
    ./src/mms/iso_mms/asn1c/DeleteNamedVariableListResponse.c
    ./src/mms/iso_mms/asn1c/asn_SEQUENCE_OF.c
    ./src/mms/iso_mms/asn1c/VariableAccessSpecification.c
    ./src/mms/iso_mms/asn1c/GetVariableAccessAttributesRequest.c
    ./src/mms/iso_mms/asn1c/xer_support.c
    ./src/mms/iso_mms/asn1c/ObjectName.c
    ./src/mms/iso_mms/asn1c/NativeEnumerated.c
    ./src/mms/iso_mms/asn1c/per_encoder.c
    ./src/mms/iso_mms/asn1c/constr_SEQUENCE.c
    ./src/mms/iso_mms/asn1c/GetNameListResponse.c
    ./src/mms/iso_mms/asn1c/MMSString.c
    ./src/mms/iso_mms/asn1c/InitiateErrorPdu.c
    ./src/mms/iso_mms/asn1c/IndexRangeSeq.c
    ./src/mms/iso_mms/asn1c/ConfirmedErrorPDU.c
    ./src/mms/iso_mms/asn1c/UnconfirmedService.c
    ./src/mms/iso_mms/asn1c/UTF8String.c
    ./src/mms/iso_mms/asn1c/ServiceError.c
    ./src/mms/iso_mms/asn1c/TimeOfDay.c
    ./src/mms/iso_mms/asn1c/GetNameListRequest.c
    ./src/mms/iso_mms/asn1c/asn_codecs_prim.c
    ./src/mms/iso_mms/asn1c/Data.c
    ./src/mms/iso_mms/asn1c/ScatteredAccessDescription.c
    ./src/mms/iso_mms/asn1c/ReadRequest.c
    ./src/mms/iso_mms/asn1c/per_decoder.c
    ./src/mms/iso_mms/asn1c/Identifier.c
    ./src/mms/iso_mms/asn1c/ServiceSupportOptions.c
    ./src/mms/iso_mms/asn1c/Integer8.c
    ./src/mms/iso_mms/asn1c/ConfirmedServiceResponse.c
    ./src/mms/iso_mms/asn1c/ParameterSupportOptions.c
    ./src/mms/iso_mms/asn1c/Integer16.c
    ./src/mms/iso_mms/asn1c/ber_tlv_length.c
    ./src/mms/iso_mms/asn1c/OCTET_STRING.c
    ./src/mms/iso_mms/asn1c/DefineNamedVariableListRequest.c
    ./src/mms/iso_mms/asn1c/FloatingPoint.c
    ./src/mms/iso_mms/asn1c/xer_encoder.c
    ./src/mms/iso_mms/asn1c/Unsigned8.c
    ./src/mms/iso_mms/asn1c/BOOLEAN.c
    ./src/mms/iso_mms/asn1c/INTEGER.c
    ./src/mms/iso_mms/asn1c/UnconfirmedPDU.c
    ./src/mms/iso_mms/asn1c/DataSequence.c
    ./src/mms/iso_mms/asn1c/constraints.c
    ./src/mms/iso_mms/asn1c/der_encoder.c
    ./src/mms/iso_mms/asn1c/VisibleString.c
    ./src/mms/iso_mms/asn1c/InitiateResponsePdu.c
    ./src/mms/iso_mms/asn1c/StructComponent.c
    ./src/mms/iso_mms/asn1c/Address.c
    ./src/mms/iso_mms/asn1c/Unsigned16.c
    ./src/mms/iso_mms/asn1c/ber_decoder.c
    ./src/mms/iso_mms/asn1c/per_support.c
    ./src/mms/iso_mms/asn1c/WriteResponse.c
    ./src/mms/iso_mms/asn1c/InitRequestDetail.c
    ./src/mms/iso_mms/asn1c/InitiateRequestPdu.c
    ./src/mms/iso_mms/asn1c/DefineNamedVariableListResponse.c
    ./src/mms/iso_mms/asn1c/NULL.c
    ./src/mms/iso_mms/asn1c/ListOfVariableSeq.c
    ./src/mms/iso_mms/asn1c/UtcTime.c
    ./src/mms/iso_mms/asn1c/ConcludeResponsePDU.c
    ./src/mms/iso_mms/asn1c/AccessResult.c
    ./src/mms/iso_mms/asn1c/Integer32.c
    ./src/mms/iso_mms/asn1c/GetNamedVariableListAttributesRequest.c
    ./src/mms/iso_mms/asn1c/VariableSpecification.c
    ./src/mms/iso_mms/asn1c/Unsigned32.c
    ./src/mms/iso_mms/asn1c/constr_CHOICE.c
    ./src/mms/iso_mms/asn1c/AlternateAccess.c
    ./src/mms/iso_mms/asn1c/ObjectClass.c
    ./src/mms/iso_mms/asn1c/InitResponseDetail.c
    ./src/mms/iso_mms/asn1c/ConfirmedResponsePdu.c
    ./src/mms/iso_mms/asn1c/GetVariableAccessAttributesResponse.c
    ./src/mms/iso_mms/asn1c/NativeInteger.c
    ./src/mms/iso_mms/asn1c/xer_decoder.c
    ./src/mms/iso_mms/asn1c/AlternateAccessSelection.c
    ./src/mms/iso_mms/asn1c/ConfirmedRequestPdu.c
    ./src/mms/iso_mms/asn1c/ConcludeRequestPDU.c
    ./src/mms/iso_mms/asn1c/WriteRequest.c
    ./src/mms/iso_mms/asn1c/RejectPDU.c
    ./src/mms/iso_mms/asn1c/TypeSpecification.c
    ./src/mms/iso_mms/asn1c/constr_TYPE.c
    ./src/mms/iso_mms/asn1c/GeneralizedTime.c
    )

    set (lib_goose_SRCS
    ./src/goose/goose_subscriber.c
    ./src/goose/goose_receiver.c
    ./src/goose/goose_publisher.c
    )

    set (lib_sv_SRCS
    ./src/sampled_values/sv_subscriber.c
    ./src/sampled_values/sv_publisher.c
    )

    set (library_SRCS
        ${lib_common_SRCS}
        ${lib_asn1c_SRCS}
        ${lib_goose_SRCS}
        ${lib_sv_SRCS}
        )

    add_library(iec61850 STATIC ${library_SRCS})

    target_compile_options(iec61850 INTERFACE "-mlongcalls")

    target_link_libraries(iec61850
        hal
        idf::lwip
        idf::newlib
    )
endif(!ESP32) #SRC

install(FILES ${API_HEADERS} DESTINATION include/libiec61850 COMPONENT Development)

if(BUILD_PYTHON_BINDINGS)
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/pyiec61850)
endif(BUILD_PYTHON_BINDINGS)

# Generate executable for esp32
if (ESP32)
    include_directories(
        examples/server_example_basic_io/include
        examples/server_example_basic_io
    )
    add_executable(example_main.elf
        examples/server_example_basic_io/server_example_basic_io.c
        examples/server_example_basic_io/static_model.c
        main/example_main.c
    )
    target_compile_options(example_main.elf INTERFACE "-mlongcalls")
    target_link_libraries(example_main.elf
        iec61850
        hal
        idf::newlib
        idf::esp_system
        idf::esp_event
        idf::log
        idf::esp_common
        idf::esp_hw_support
        idf::nvs_flash
        idf::protocol_examples_common
        idf::esp_netif
        idf::lwip
        idf::esp_phy
    )
    idf_build_executable(example_main.elf)
endif(ESP32)

set(CPACK_PACKAGE_DESCRIPTION "IEC 61850 MMS/GOOSE client and server library")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "IEC 61850 MMS/GOOSE client and server library")
set(CPACK_PACKAGE_VENDOR "MZ Automation GmbH")
set(CPACK_PACKAGE_CONTACT "info@libiec61850.com")
set(CPACK_PACKAGE_VERSION_MAJOR "${LIB_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${LIB_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${LIB_VERSION_PATCH}")
set(CPACK_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}_${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}_${CMAKE_SYSTEM_PROCESSOR}")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}_${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")

set(CPACK_COMPONENTS_ALL Libraries Development Applications)
#set(CPACK_PACKAGE_INSTALL_DIRECTORY "${CMAKE_PROJECT_NAME}")

if(EXISTS "${CMAKE_ROOT}/Modules/CPack.cmake")
    include(InstallRequiredSystemLibraries)

    include(CPack)
endif(EXISTS "${CMAKE_ROOT}/Modules/CPack.cmake")