cmake_minimum_required(VERSION 3.23)

project(observerproj)

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

message("Adding src...")
add_subdirectory(src bin)
