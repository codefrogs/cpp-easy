# sims
message("Adding aircraft_sims...")

# Create the sims library
add_library( aircraft_sim OBJECT aircraft_sim.cpp)
target_include_directories(aircraft_sim PUBLIC .)

