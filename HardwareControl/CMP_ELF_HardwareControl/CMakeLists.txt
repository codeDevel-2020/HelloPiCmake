
project(CMP_ELF_HardwareControl VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem (in this folder)
list(APPEND CMP_ELF_HARDWARECONTROL_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)


# We build an executable with the source files of this subsystem
add_executable(CMP_ELF_HardwareControl ${CMP_ELF_HARDWARECONTROL_SRC})


# Add libraries which are needed for this subsystem
target_link_libraries(CMP_ELF_HardwareControl
    CMP_LIB_Utilities
    CMP_LIB_LoggerClient
    pthread
)


# Custom command (post build) to copy the executable to the runfiles directory
add_custom_command(
    TARGET CMP_ELF_HardwareControl POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory "${RUNFILES_DIR}"
    COMMAND ${CMAKE_COMMAND} -E copy "$<TARGET_FILE:CMP_ELF_HardwareControl>" "${RUNFILES_DIR}/"
    COMMENT "Copying 'CMP_ELF_HardwareControl' to '${RUNFILES_DIR}' directory"
)
