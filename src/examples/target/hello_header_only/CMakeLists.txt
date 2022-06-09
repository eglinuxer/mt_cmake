cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(hello_header_only
    VERSION 0.0.1
    DESCRIPTION "Chapter 3 header only example"
    LANGUAGES CXX
)

# Create a library target
add_library(hello_header_only INTERFACE)

# expose the include directories
target_include_directories(hello_header_only INTERFACE include/)
# expose the minium C++ standard needed to compile this library
target_compile_features(hello_header_only INTERFACE cxx_std_17)
