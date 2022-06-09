cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(hello_world_standalone
    VERSION 0.0.1
    DESCRIPTION "A simple C++ project to demonstrate creating a standalone executables"
    LANGUAGES CXX
)

# Create a target to build an executable
add_executable(hello_world_standalone)
# Add source files to 'hello_world' target
target_sources(hello_world_standalone PRIVATE src/main.cpp)
