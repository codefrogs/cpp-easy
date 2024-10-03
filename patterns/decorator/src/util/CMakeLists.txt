message("Util directory")
add_library(util_lib OBJECT pos.cpp)
target_include_directories(decorator PUBLIC .)
