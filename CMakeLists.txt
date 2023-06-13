cmake_minimum_required(VERSION 3.25)
project(Rubik_s_cube_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubik_s_cube_project main.cpp GenericRubiksCube.cpp GenericRubiksCube.h 3darrayRepresentation.cpp 1darrayRepresentation.cpp itboardRepresentation.cpp BitboardRepresentation.cpp BitboardRepresentation.cpp)
