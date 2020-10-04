cmake_minimum_required(VERSION 3.16)
project(TahoBus)

set(CMAKE_CXX_STANDARD 14)

add_executable(TahoBus main.cpp edge_data.h node_data.h graph.h Point_3D.h graph_algorithem.h myNode.cpp doctest.h)