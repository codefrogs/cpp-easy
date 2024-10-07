# sims
message("Adding aircraft_sims...")

# Create the sims library
add_library( aircraft_sims OBJECT aircraft_sim.cpp)
target_include_directories(aircraft_sims PUBLIC .)

