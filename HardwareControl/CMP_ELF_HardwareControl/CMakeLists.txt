
project(HardwareControl VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND CMP_ELF_HARDWARECONTROL_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)

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
