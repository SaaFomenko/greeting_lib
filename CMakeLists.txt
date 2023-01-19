cmake_minimum_required(VERSION 3.5)

project(greeter 
	VERSION 1.0.0
	DESCRIPTION "C++ library with class Greeter, built with CMake"
	LANGUAGES CXX)

set(public_headers "include/${PROJECT_NAME}/*.h")
set(sources "src/*.cpp")

add_library(${PROJECT_NAME}_lib ${sources} ${public_headers})
