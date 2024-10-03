message("Equipment directory")
add_library(equip_lib OBJECT aircraft_decorator.cpp 
                             gps_decorator.cpp 
                             logging_decorator.cpp                              
                             rand_walk_decorator.cpp
                             thrust_boost_decorator.cpp)

target_include_directories(equip_lib PUBLIC .)
target_include_directories(equip_lib PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_include_directories(equip_lib PRIVATE ${CMAKE_SOURCE_DIR}/src/util)

