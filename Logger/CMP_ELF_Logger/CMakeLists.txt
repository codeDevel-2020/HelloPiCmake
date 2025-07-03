
project(Logger VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND CMP_ELF_LOGGER_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../main.cpp
)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../subfolder1 ./subfolder1)


# Include directories (this subsystem) during compilation
include_directories(../subfolder1)

# Include directories (libraries) during compilation
include_directories(../../Utilities/folder1)
include_directories(../../Utilities/folder2)


add_executable(Logger.elf ${CMP_ELF_LOGGER_SRC})


target_link_libraries(Logger.elf
    Utilities
    pthread
)
