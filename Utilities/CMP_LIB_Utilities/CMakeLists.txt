
# Project name an version (compiles C++ and C code)
project(Utilities VERSION 1.0.0 LANGUAGES CXX C)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../folder1 ./folder1)
add_subdirectory(../folder2 ./folder2)

# Include directories during compilation
include_directories(../folder1)
include_directories(../folder2)

# Pack the source files into the library
add_library(Utilities ${MY_LIB_SOURCES})
