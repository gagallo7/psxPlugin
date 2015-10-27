cmake_minimum_required (VERSION 2.8.11)

include_directories (${Pwm_SOURCE_DIR}/inc) 
add_library (tcps tcpstream.cpp tcpconnector.cpp)

add_executable ( pwm client.cpp )
target_link_libraries ( pwm tcps )
