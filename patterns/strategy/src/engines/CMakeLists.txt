message("Engines directory")
add_library(engines_lib OBJECT engine_strategy.cpp rocket_strategy.cpp turbofan_strategy.cpp turboprop.cpp)
target_include_directories(engines_lib PUBLIC .)
