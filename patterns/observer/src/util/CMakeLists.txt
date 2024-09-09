message("Adding util_lib...")
add_library(util_lib OBJECT observable.cpp)
target_include_directories(util_lib PUBLIC .)
