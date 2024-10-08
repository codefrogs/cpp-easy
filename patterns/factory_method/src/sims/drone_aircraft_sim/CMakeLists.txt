message("Adding drone_aircraft_sim...")

# create the library
add_library(drone_aircraft_sim OBJECT drone_aircraft_sim.cpp)

# add the include paths for this library
target_include_directories(drone_aircraft_sim PUBLIC .)

# Add dependencies
target_link_libraries( drone_aircraft_sim PUBLIC aircraft_sim aircraft)
