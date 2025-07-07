
project(CMP_ELF_Logger VERSION 1.0.0 LANGUAGES CXX C)


# Add the source files of this subsystem (in this folder)
list(APPEND CMP_ELF_LOGGER_SRC
    ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp
)


# Subdirectories with source files (CMakeLists.txt files)
add_subdirectory(../src/subfolder1 ./subfolder1)

# Include directories (this subsystem) during compilation
include_directories(../src/subfolder1)


# We build an executable with the source files of this subsystem
add_executable(CMP_ELF_Logger ${CMP_ELF_LOGGER_SRC})


# Add libraries which are needed for this subsystem
target_link_libraries(CMP_ELF_Logger
    CMP_LIB_Utilities
    pthread
)


# Custom command (post build) to copy the executable to the runfiles directory
add_custom_command(
    TARGET CMP_ELF_Logger POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory "${RUNFILES_DIR}"
    COMMAND ${CMAKE_COMMAND} -E copy "$<TARGET_FILE:CMP_ELF_Logger>" "${RUNFILES_DIR}/"
    COMMENT "Copying 'CMP_ELF_Logger' to '${RUNFILES_DIR}' directory"
)