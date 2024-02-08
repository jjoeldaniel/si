#!/usr/bin/env bash

clang++ "${1}" --std=c++17
./a.out
rm a.out
