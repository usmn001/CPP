cmake_minimum_required(VERSION 3.10)  # Minimum CMake version

# Define your project and language
project(MyProject LANGUAGES CXX)

# Force g++ as compiler (optional, usually auto-detected)
set(CMAKE_CXX_COMPILER g++)

# Require at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add compiler flags (similar to Makefile CFLAGS)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -O2 -g -fstack-usage")

# Add include directories if neededB
# include_directories(include)

# Define the executable target and its source files
add_executable(${PROJECT_NAME}
    src/Program.cpp
)