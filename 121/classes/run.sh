#!/usr/bin/env bash

SOURCE_FILES="main.cc Pet.cc"
EXECUTABLE_NAME="pet_simulator"
CPP_STANDARD="c++17"

if command -v clang++ &> /dev/null; then
  COMPILER="clang++"
elif command -v g++ &> /dev/null; then
  COMPILER="g++"
else
  echo "Error: Could not find clang++ or g++. Please install one to continue."
  exit 1
fi

echo "Using compiler: ${COMPILER}"
echo "Compiling project..."

echo ${COMPILER} -std=${CPP_STANDARD} -o ${EXECUTABLE_NAME} ${SOURCE_FILES}
${COMPILER} -std=${CPP_STANDARD} -o ${EXECUTABLE_NAME} ${SOURCE_FILES}

if [ $? -eq 0 ]; then
  echo "Compilation successful. Starting the program..."
  echo "--------------------------------------------"
  ./${EXECUTABLE_NAME}
  echo "--------------------------------------------"
  echo "Program finished. Cleaning up..."
  rm ${EXECUTABLE_NAME}
else
  echo "Compilation failed. Please review the error messages above."
  exit 1
fi
