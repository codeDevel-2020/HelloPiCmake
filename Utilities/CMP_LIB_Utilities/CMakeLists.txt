
# Project name an version (compiles C++ and C code)
project(CMP_LIB_Utilities VERSION 1.0.0 LANGUAGES CXX C)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../src/folder1 ./folder1)
add_subdirectory(../src/folder2 ./folder2)

# Include directories during compilation
include_directories(../src/folder1)
include_directories(../src/folder2)

# Pack the source files into the library
add_library(CMP_LIB_Utilities ${CMP_LIB_UTILITIES_SRC})


target_include_directories(CMP_LIB_Utilities
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ../src/folder1
        ../src/folder2
)