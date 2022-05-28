cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(print_commit
    VERSION 0.0.1
    DESCRIPTION "print git commit in execute"
    LANGUAGES CXX
)

add_executable(print_commit)
target_sources(print_commit
    PRIVATE
        src/print_commit.cpp
)

execute_process(COMMAND git log -1 --pretty=format:%h
    OUTPUT_VARIABLE SHA
)

message(STATUS "SHA=${SHA}")

target_compile_definitions(print_commit
    PRIVATE
        "SHA=${SHA}"
)