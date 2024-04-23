#!/usr/bin/env bash

# Check if clang++ is available, otherwise fallback to g++
if command -v clang++ &>/dev/null; then
	COMPILER="clang++"
else
	COMPILER="g++"
fi

# Compile the source files
$COMPILER -std=c++17 Book.cpp main.cpp -o book

# Check if compilation was successful
if [ $? -eq 0 ]; then
	echo "Compilation successful. Running test..."
	# Run the executable
	./book
else
	echo "Compilation failed."
fi
