cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(dependence
    VERSION 0.0.1
    DESCRIPTION "A collection of sample C++ projects to demonstrate using external dependencies"
    LANGUAGES CXX
)

add_subdirectory(find_package_example)
add_subdirectory(find_module)
add_subdirectory(fetch_content_example)
add_subdirectory(external_project_example)