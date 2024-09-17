cmake_minimum_required(VERSION 3.23)

project(templateproj)

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

message("Adding src...")
add_subdirectory(src bin)
