cmake_minimum_required(VERSION 3.25)
project(Rubik_s_cube_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubik_s_cube_project main.cpp Models/GenericRubiksCube.cpp Models/GenericRubiksCube.h Models/3darrayRepresentation.cpp Models/1darrayRepresentation.cpp  Models/BitboardRepresentation.cpp Models/GenericRubiksCube.cpp)
