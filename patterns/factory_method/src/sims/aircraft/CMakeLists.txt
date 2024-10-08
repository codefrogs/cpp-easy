# aircraft

add_library(aircraft OBJECT cessna_skyhawk.cpp airbus_a320.cpp boeing_777.cpp spitefire_mk24.cpp gulfstream_g550.cpp
                            mini_pro.cpp air_3.cpp shadow.cpp raptor.cpp parrot.cpp )
target_include_directories(aircraft PUBLIC .)
target_include_directories(aircraft PUBLIC ../aircraft_sim)
