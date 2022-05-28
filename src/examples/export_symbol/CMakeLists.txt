cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(tools
    VERSION 0.0.1
    DESCRIPTION "an example about export symbol use cmake"
    LANGUAGES CXX
)

add_library(tools SHARED)
target_sources(tools
    PRIVATE src/tools.cpp
)
set_property(
    TARGET tools
    PROPERTY
        CXX_VISIBILITY_PRESET "hidden"
)
set_property(
    TARGET tools
    PROPERTY
    VISIBILITY_INLINES_HIDDEN TRUE
)

include(GenerateExportHeader)
generate_export_header(tools
    EXPORT_FILE_NAME include/tools/tools_export.h
    EXPORT_MACRO_NAME EXPORT_TOOLS
)

target_include_directories(tools
    PUBLIC
        "${CMAKE_CURRENT_BINARY_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)