cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(mt_cmake
    VERSION 0.0.1
    DESCRIPTION "mthreads cmake practices"
    LANGUAGES CXX
)

list(APPEND CMAKE_MESSAGE_CONTEXT mt_cmake)

add_subdirectory(src)