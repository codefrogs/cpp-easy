# src
message("Adding executable...")
add_executable(factoryex main.cpp)

message("Adding sims...")
add_subdirectory(sims)

target_include_directories(factoryex PRIVATE sims)

# Adding the library sims_lib to factory_method executable
# (PRIVATE is not relevant for an executable)
target_link_libraries(factoryex PRIVATE sims)
