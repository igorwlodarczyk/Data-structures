#!/bin/bash

# compile main program
g++ -std=c++11 -o main double_linked_list.cpp dynamic_array.cpp binary_heap.cpp binary_search_tree.cpp main.cpp

# compile tests
g++ -std=c++14 dynamic_array.cpp double_linked_list.cpp binary_heap.cpp binary_search_tree.cpp tests.cpp -lgtest -lgtest_main -pthread -o tests

# run main program
./main

# run tests
# ./tests

