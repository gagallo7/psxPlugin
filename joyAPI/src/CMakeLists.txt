add_executable ( ex example.cpp )

add_library ( joy joystick.cc )

include_directories ( ${PROJECT_SOURCE_DIR}/inc )
target_include_directories ( joy PUBLIC ${PROJECT_SOURCE_DIR} )
target_link_libraries ( ex joy )
