# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

project (SimpleClient)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    client.cpp
	EasyTcpClient.hpp
	MessageHeader.hpp
)

# Add an executable with the above sources
add_executable(SimpleClient ${SOURCES})

target_link_libraries(SimpleClient ws2_32.lib)