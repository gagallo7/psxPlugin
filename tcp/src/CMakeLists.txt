cmake_minimum_required (VERSION 2.8)

add_executable ( wow client.cpp )

include_directories(${PROJECT_SOURCE_DIR}/inc)
add_library ( tcpstuff tcpstream.cpp tcpconnector.cpp )
#add_library ( tcpstuff tcpstream.cpp tcpconnector.cpp tcpstream.h tcpconnector.h )

target_include_directories ( tcpstuff PUBLIC ${PROJECT_SOURCE_DIR} )
target_link_libraries ( wow tcpstuff )

set ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR} )
