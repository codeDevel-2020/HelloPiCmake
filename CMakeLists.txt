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


project(HomeControl VERSION 1.0.0 LANGUAGES CXX C)

add_subdirectory(Utilities/CMP_LIB_Utilities CMP_LIB_Utilities)
add_subdirectory(Logger/CMP_LIB_LoggerClient CMP_LIB_LoggerClient)
add_subdirectory(Logger/CMP_ELF_Logger CMP_ELF_Logger)
