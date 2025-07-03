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


project(HelloWorldPi VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND MY_SUBSYSTEM_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(subfolder1)

add_subdirectory(../lib ../build/lib)

# Include directories (this subsystem) during compilation
include_directories(subfolder1)

# Include directories (libraries) during compilation
include_directories(../lib/folder1)
include_directories(../lib/folder2)




# The directory of the library build directory (library location)
#link_directories(../lib/build)


add_executable(HelloWorldPi.elf ${MY_SUBSYSTEM_SOURCES})


target_link_libraries(HelloWorldPi.elf
    WriterLibrary
    pthread
)
