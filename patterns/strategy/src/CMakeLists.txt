message("Adding executable...")
add_executable(strategy main.cpp aircraft.cpp )
add_subdirectory(engines)
target_link_libraries(strategy PRIVATE engines_lib)
