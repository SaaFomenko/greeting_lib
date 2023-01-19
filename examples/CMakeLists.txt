cmake_minimum_required(VERSION 3.5)

project(greeter)

set(public_headers ../include/${PROJECT_NAME}/*.h)
set(sources ../src/*.cpp)

add_library(${PROJECT_NAME}_lib STATIC ${source} ${public_headers})
add_executable(${PROJECT_NAME}.exe main.cpp ${source})

target_link_libraries(${PROJECT_NAME}.exe ${PROJECT_NAME}_lib)
