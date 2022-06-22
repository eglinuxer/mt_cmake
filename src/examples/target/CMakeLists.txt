cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(target
    VERSION 0.0.1
    DESCRIPTION "A collection of sample C++ applications and libraries to demonstrate creating libraries and executables"
    LANGUAGES CXX
)

# Add subdirectories with examples
add_subdirectory(hello_world_standalone)
add_subdirectory(hello_shared_lib)
add_subdirectory(hello_static_lib)
add_subdirectory(hello_header_only)
add_subdirectory(hello_object_lib)

# add an example executable
add_executable(target)
# add sources to the example executable
target_sources(target PRIVATE src/main.cpp)
# link libraries "hello" and "hello_header_only" to the example executable the
# libraries are described in the subdirectories
# target_link_libraries(target PRIVATE hello_header_only hello_static hello_object)
target_link_libraries(target PRIVATE hello_header_only hello_shared hello_object)
