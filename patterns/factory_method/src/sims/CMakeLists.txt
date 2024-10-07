message("Adding sims...")
add_subdirectory(civil_aircraft_sim)

add_library( sims_lib OBJECT aircraft_sim.cpp )

target_include_directories(sims_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
