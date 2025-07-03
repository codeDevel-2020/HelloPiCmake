
project(Logger VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND MY_SUBSYSTEM_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/../main.cpp
)

# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../subfolder1 ./subfolder1)

#add_subdirectory(../Utilities/CMP_LIB_Utilities ../build/Utilities/CMP_LIB_Utilities)

# Include directories (this subsystem) during compilation
include_directories(../subfolder1)

# Include directories (libraries) during compilation
include_directories(../../Utilities/folder1)
include_directories(../../Utilities/folder2)


add_executable(Logger.elf ${MY_SUBSYSTEM_SOURCES})


target_link_libraries(Logger.elf
    Utilities
    pthread
)
