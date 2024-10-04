message("Adding executable...")
add_executable(factory_method main.cpp)
add_subdirectory(sims)
target_include_directories(factory_method PRIVATE .)
