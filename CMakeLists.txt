cmake_minimum_required(VERSION 3.20)

# Use 'ccache' if it is installed in system's PATH.
find_program(CCACHE_PROGRAM ccache)
if (CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

# Export compilation database in JSON format.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project definition
project(Aly C)

# Specify the source file for your project
set(SOURCES
    src/main.c
)

# Add the executable target (Aly compiler)
add_executable(aly ${SOURCES})

# Set the C standard to C99
set_target_properties(aly PROPERTIES
    C_STANDARD 99
)