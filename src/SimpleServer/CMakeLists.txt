# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (SimpleServer)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    server.cpp
)

# Add an executable with the above sources
add_executable(SimpleServer ${SOURCES})

target_link_libraries(SimpleServer ws2_32.lib)