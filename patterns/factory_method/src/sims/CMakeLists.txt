message("Adding sims...")
add_library( sims_lib OBJECT aircraft_sim.cpp )
target_include_directories(factory_method PRIVATE .)
