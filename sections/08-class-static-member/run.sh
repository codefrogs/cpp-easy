#!/bin/bash

#Create build with:
echo "Generating..."
cmake -S . -B build
echo

# Build
echo "Building..."
cd build
make
cd ../ 
echo

echo "Running..."
./build/shape
