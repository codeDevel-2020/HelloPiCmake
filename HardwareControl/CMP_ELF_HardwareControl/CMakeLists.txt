
project(CMP_ELF_HardwareControl VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem
list(APPEND CMP_ELF_HARDWARECONTROL_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)


add_executable(CMP_ELF_HardwareControl ${CMP_ELF_HARDWARECONTROL_SRC})

target_link_libraries(CMP_ELF_HardwareControl
    CMP_LIB_Utilities
    CMP_LIB_LoggerClient
    pthread
)
