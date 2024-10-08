# aircraft

add_library(aircraft OBJECT cessna_skyhawk.cpp airbus_a320.cpp)
target_include_directories(aircraft PUBLIC .)
target_include_directories(aircraft PUBLIC ../aircraft_sim)
