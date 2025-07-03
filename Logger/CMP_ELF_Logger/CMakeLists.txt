
project(CMP_ELF_Logger VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND CMP_ELF_LOGGER_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../src/subfolder1 ./subfolder1)

# Include directories (this subsystem) during compilation
include_directories(../src/subfolder1)


add_executable(CMP_ELF_Logger ${CMP_ELF_LOGGER_SRC})

target_link_libraries(CMP_ELF_Logger
    CMP_LIB_Utilities
    pthread
)
