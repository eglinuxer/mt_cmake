cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(hello_object
    VERSION 0.0.1
    DESCRIPTION "A simple C++ project to demonstrate creating executables and libraries in CMake"
    LANGUAGES CXX
)

# add the library target
add_library(hello_object OBJECT)

# add sources to the library target
target_sources(hello_object PRIVATE src/hello_object.cpp)

# define the C++ standard needed to compile this library and make it visible to dependers
target_compile_features(hello_object PUBLIC cxx_std_17)

# set the include directories
target_include_directories(hello_object
    PUBLIC include
)
