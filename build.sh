#!/bin/bash
# © 2025 - Ata İlhan Köktürk
# Licensed under the GNU General Public License, Version 3 (GPLv3)
# See the LICENSE file for details.

# Set variables
INCLUDE_DIR="include"
SRC_DIR="src"
BUILD_DIR="build"
OUTPUT="$BUILD_DIR/main"

# Create build directory if it doesn't exist
mkdir -p $BUILD_DIR

# Compile the project
echo "Compiling the project..."
g++ -I$INCLUDE_DIR -o $OUTPUT $SRC_DIR/main.cpp $SRC_DIR/map/CTR.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful! Executable is located at: $OUTPUT"
else
    echo "Compilation failed! Please check the error messages above."
    exit 1
fi