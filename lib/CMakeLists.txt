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


project(WriterLibrary VERSION 1.0.0 LANGUAGES CXX)


include(folder1/CMakeLists.txt)
include(folder2/CMakeLists.txt)


add_library(WriterLibrary ${MY_LIB_SOURCES})

