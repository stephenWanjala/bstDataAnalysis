cmake_minimum_required(VERSION 3.27)
project(bstC)

set(CMAKE_CXX_STANDARD 17)

add_executable(bstC main.cpp
        Node.cpp
        Node.hpp
        BST.cpp
        BST.h
        TransactionNode.cpp
        TransactionNode.h
        DataAnalysis.cpp
        DataAnalysis.h
)
