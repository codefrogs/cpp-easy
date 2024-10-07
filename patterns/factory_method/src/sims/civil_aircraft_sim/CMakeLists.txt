message("Adding civil_aircraft_sim...")

# create the library
add_library(civil_aircraft_sim OBJECT civil_aircraft_sim.cpp)

# add the include paths for this library
target_include_directories(civil_aircraft_sim PUBLIC .)

# Add dependencies
target_link_libraries( civil_aircraft_sim PUBLIC aircraft_sim aircraft)
