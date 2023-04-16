run
g++ -o main double_linked_list.cpp dynamic_array.cpp binary_heap.cpp binary_search_tree.cpp main.cpp

run tests
g++ -std=c++14 dynamic_array.cpp double_linked_list.cpp binary_heap.cpp binary_search_tree.cpp tests.cpp -lgtest -lgtest_main -pthread -o tests

or you can use bash script run.sh

required libraries:
- google test (make it sure it's added to your path)

Igor Wlodarczyk 2023