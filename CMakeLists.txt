cmake_minimum_required(VERSION 3.10)

# The name of the operating system for which CMake is to build.
set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++)
set(COMPILER_NAME arm-linux-gnueabihf)


# Append specific compile flags for "DEBUG"
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

# Append specific compile flags for "RELEASE"
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3")


set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
set(CMAKE_CXX_STANDARD 11)


# Custom runfiles directory (cached for all subdirectories)
set(RUNFILES_DIR "${CMAKE_SOURCE_DIR}/_elfFiles/$<CONFIG>" CACHE PATH "Directory for runfiles")


project(HomeControl VERSION 1.0.0 LANGUAGES CXX C)

add_subdirectory(Utilities/CMP_LIB_Utilities CMP_LIB_Utilities)
add_subdirectory(Logger/CMP_LIB_LoggerClient CMP_LIB_LoggerClient)
add_subdirectory(Logger/CMP_ELF_Logger CMP_ELF_Logger)
add_subdirectory(HardwareControl/CMP_ELF_HardwareControl CMP_ELF_HardwareControl)


# Custom make target "HomeControl" to build all components (same as "make all")
add_custom_target(HomeControl ALL
    DEPENDS CMP_ELF_Logger CMP_ELF_HardwareControl
    COMMENT "Project HomeControl fully built")

# Custom make target "Libs" to build all project libraries
add_custom_target(Libs 
    DEPENDS CMP_LIB_Utilities CMP_LIB_LoggerClient
    COMMENT "Project Libraries fully built")    