cmake_minimum_required(VERSION 3.16.3)
project(TimedInsertAndFind)

set(CMAKE_CXX_STANDARD 11)
add_executable(p main.cpp avl.cpp 2-3tree.cpp abb.cpp avlNode.cpp abbNode.cpp 2-3Node.cpp)