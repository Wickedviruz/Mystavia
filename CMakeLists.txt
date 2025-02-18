cmake_minimum_required(VERSION 3.10)
project(Mystavia)

# ange c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Lägg till delmappar
add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(shared)