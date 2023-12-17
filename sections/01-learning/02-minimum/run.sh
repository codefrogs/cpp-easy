#!/bin/bash
# Build and run script

# Build
g++ -O2 --std=c++20 main.cpp -o minimum

# Run
echo "Running..."
./minimum 
echo "Finished!"
