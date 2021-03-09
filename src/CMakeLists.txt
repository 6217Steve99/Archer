# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

project (SimpleCS)

add_subdirectory(SimpleClient)
add_subdirectory(SimpleServer)