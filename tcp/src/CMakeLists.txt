cmake_minimum_required (VERSION 2.8)

add_executable ( wow client.cpp )

include_directories(${PROJECT_BINARY_DIR}/inc)
add_library ( tcpstuff tcpstream.cpp tcpconnector.cpp )
#add_library ( tcpstuff tcpstream.cpp tcpconnector.cpp tcpstream.h tcpconnector.h )

target_include_directories ( tcpstuff PUBLIC ${ROOT_SOURCE_DIR} )
target_link_libraries ( wow tcpstuff )

