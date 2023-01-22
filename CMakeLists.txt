cmake_minimum_required(VERSION 3.5)

project(greeter) 

if (NOT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This project has a top-level one called [${CMAKE_PROJECT_NAME}]")
else()
    message(STATUS "This project is a top-level one")
endif()

file(GLOB
	public_headers "include/${PROJECT_NAME}/*.h"
	sources "src/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(${PROJECT_NAME}_lib STATIC ${sources} ${public_headers})
