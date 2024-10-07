# sims
message("Adding sims...")

# Create the sims library
add_library( sims )

# Add the civil aircraft sim directory
add_subdirectory(aircraft_sims)
target_include_directories(sims PUBLIC aircraft_sims)

# Add the civil aircraft sim directory
add_subdirectory(civil_aircraft_sim)
target_include_directories(sims PUBLIC civil_aircraft_sim)

# Add dependencies
target_link_libraries( sims PUBLIC civil_aircraft_sim aircraft_sims)

