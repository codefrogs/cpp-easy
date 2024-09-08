message("Adding executable...")
add_executable(observerex main.cpp oven.cpp light.cpp)
add_subdirectory(util)
target_link_libraries(observerex PRIVATE util_lib)

