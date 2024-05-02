#!/usr/bin/env bash

c_compiler=""

if command -v clang++ &>/dev/null; then
	c_compiler="clang++"
elif command -v g++ &>/dev/null; then
	c_compiler="g++"
fi

"${c_compiler}" main.cpp --std=c++17
./a.out
