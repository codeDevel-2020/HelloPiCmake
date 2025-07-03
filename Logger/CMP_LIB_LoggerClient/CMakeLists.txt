
# Project name an version (compiles C++ and C code)
project(CMP_LIB_LoggerClient VERSION 1.0.0 LANGUAGES CXX C)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../src/clientFolder ./clientFolder)

# Include directories during compilation
include_directories(../src/clientFolder)

# Pack the source files into the library
add_library(CMP_LIB_LoggerClient ${CMP_LIB_LOGGER_CLIENT_SRC})
