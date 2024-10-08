# sims
message("Adding sims...")

# Create the sims library
add_library( sims )

# Add aircraft directory
add_subdirectory(aircraft)

# Add the civil aircraft sim directory
add_subdirectory(aircraft_sim)
target_include_directories(sims PUBLIC aircraft_sim)

# Add the civil aircraft sim directory
add_subdirectory(civil_aircraft_sim)
target_include_directories(sims PUBLIC civil_aircraft_sim)

# Add the civil aircraft sim directory
add_subdirectory(drone_aircraft_sim)
target_include_directories(sims PUBLIC drone_aircraft_sim)

# Add dependencies
target_link_libraries( sims PUBLIC civil_aircraft_sim drone_aircraft_sim aircraft_sim aircraft)

