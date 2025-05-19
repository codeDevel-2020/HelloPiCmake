cmake_minimum_required(VERSION 4.0.1)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER arm-linux-gnueabihf-g++)
set(CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++)
set(COMPILER_NAME arm-linux-gnueabihf)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)


project(HelloWorldPi VERSION 1.0.0 LANGUAGES CXX)


include_directories(../lib/folder1)
include_directories(../lib/folder2)


link_directories(../lib/build)


add_executable(HelloWorldPi.elf main.cpp)


target_link_libraries(HelloWorldPi.elf
    -lWriterLibrary
    -lpthread
)
