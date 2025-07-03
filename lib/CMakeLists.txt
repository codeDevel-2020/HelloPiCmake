cmake_minimum_required(VERSION 3.10)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++)
set(COMPILER_NAME arm-linux-gnueabihf)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
set(CMAKE_CXX_STANDARD 11)

# Project name an version (compiles C++ and C code)
project(WriterLibrary VERSION 1.0.0 LANGUAGES CXX C)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(folder1)
add_subdirectory(folder2)

# Include directories during compilation
include_directories(folder1)
include_directories(folder2)

# Pack the source files into the library
add_library(WriterLibrary ${MY_LIB_SOURCES})
