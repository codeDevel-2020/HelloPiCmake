
project(HardwareControl VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND CMP_ELF_HARDWARECONTROL_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)

# Subdirectories with source files (CMakeLists.txt files)
# add_subdirectory(../src/subfolder1 ./subfolder1)


# Include directories (this subsystem) during compilation
#include_directories(../src/subfolder1)

# Include directories (libraries) during compilation
include_directories(../../Utilities/src/folder1)
include_directories(../../Utilities/src/folder2)

include_directories(../../Logger/src/clientFolder)


add_executable(HardwareControl.elf ${CMP_ELF_HARDWARECONTROL_SRC})


target_link_libraries(HardwareControl.elf
    Utilities
    LoggerClient
    pthread
)
