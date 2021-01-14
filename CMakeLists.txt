# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (SimpleServer)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/server.cpp
)

# Add an executable with the above sources
add_executable(SimpleServer ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(SimpleServer
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(SimpleServer ws2_32.lib)

project (SimpleClient)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/client.cpp
)

# Add an executable with the above sources
add_executable(SimpleClient ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(SimpleClient
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(SimpleClient ws2_32.lib)