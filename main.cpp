#include "double_linked_list.h"
#include "dynamic_array.h"
#include "binary_heap.h"
#include "binary_search_tree.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include <vector>

using std::cout;
using std::endl;
using std::cin;

struct timespec start, end;
double elapsed_time;
std::vector<int> v;

BinaryHeap heap2;
DynamicArray array2;
DoublyLinkedList list2;
BinarySearchTree bst2;


void heapAddBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        heap2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void heapPopBenchmark(int number){
    cout<<"Benchmark_test: Popping "<<number<<" values from the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        heap2.popMax();
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void arrayAddBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the dynamic array"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        array2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void arrayRemoveBenchmark(int number){
    cout<<"Benchmark_test: Removing "<<number<<" values from the dynamic array"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        array2.removeAtIndex(0);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void arrayAddAtIndexBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the dynamic array at the middle index"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        array2.addAtIndex(rand(), array2.getSize() / 2);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void arrayRemoveAtIndexBenchmark(int number){
    cout<<"Benchmark_test: Removing "<<number<<" values from the dynamic array at the middle index"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        array2.removeAtIndex(array2.getSize() / 2);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void arrayGetValueFromRandomIndexBenchmark(int number){
    cout<<"Benchmark_test: Get "<<number<<" values from the dynamic array"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        array2.getValue(rand() % array2.getSize());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListAddFirstBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the double linked list at the beginning"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.addFirst(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListAddLastBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the double linked list at the end"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.addLast(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListRemoveFirstBenchmark(int number){
    cout<<"Benchmark_test: Removing "<<number<<" values from the double linked list from the beginning"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.removeFirst();
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListRemoveLastBenchmark(int number){
    cout<<"Benchmark_test: Removing "<<number<<" values from the double linked list at the end"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.removeLast();
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListAddAtIndexBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the double linked list at the middle index"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.addAtIndex(rand(), list2.getSize() / 2);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListRemoveAtIndexBenchmark(int number){
    cout<<"Benchmark_test: Removing "<<number<<" values from the double linked list at the middle index"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.removeAtIndex(list2.getSize() / 2);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void linkedListGetValueFromRandomIndexBenchmark(int number){
    cout<<"Benchmark_test: Get "<<number<<" values from the double linked list"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        list2.get(rand() % list2.getSize());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void bstAddBenchmark(int number){
    cout<<"Benchmark_test: Adding "<<number<<" values to the binary search tree"<<endl;
    for(int i = 0; i < number; i++){
        v.push_back(rand());
    }

    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        bst2.add(v[i]);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void bstSearchBenchmark(int number){
    cout<<"Benchmark_test: Searching "<<number<<" values in the binary search tree"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        bst2.searchValue(v[i]);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void bstDeleteValueBenchmark(int number){
    cout<<"Benchmark_test: Deleting "<<number<<" values in the binary search tree"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < number; i++){
        bst2.deleteValue(v[i]);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
    v.clear();
}

void bstGetMaxBenchmark(int number){
    cout<<"Benchmark_test: Getting max value from "<<number<<" values in the binary search tree"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    bst2.getMax();
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void bstGetMinBenchmark(int number){
    cout<<"Benchmark_test: Getting max value from "<<number<<" values in the binary search tree"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    bst2.getMin();
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;
}

void benchmark(){
    srand(time(NULL));


    cout<<"__Binary heap benchmark__"<<endl;
    heapAddBenchmark(500000);
    heapPopBenchmark(500000);
    heapAddBenchmark(1000000);
    heapPopBenchmark(1000000);
    heapAddBenchmark(1500000);
    heapPopBenchmark(1500000);
    heapAddBenchmark(2000000);
    heapPopBenchmark(2000000);
    heapAddBenchmark(2500000);
    heapPopBenchmark(2500000);
    cout<<"__Dynamic array benchmark__"<<endl;
    arrayAddBenchmark(5000);
    arrayGetValueFromRandomIndexBenchmark(5000);
    arrayAddBenchmark(10000);
    arrayGetValueFromRandomIndexBenchmark(10000);
    arrayAddBenchmark(15000);
    arrayGetValueFromRandomIndexBenchmark(15000);
    arrayAddBenchmark(20000);
    arrayGetValueFromRandomIndexBenchmark(20000);
    arrayAddBenchmark(25000);
    arrayGetValueFromRandomIndexBenchmark(25000);
    cout<<endl;
    arrayRemoveBenchmark(5000);
    arrayRemoveBenchmark(10000);
    arrayRemoveBenchmark(15000);
    arrayRemoveBenchmark(20000);
    arrayRemoveBenchmark(25000);
    cout<<endl;
    arrayAddAtIndexBenchmark(5000);
    arrayRemoveAtIndexBenchmark(5000);
    arrayAddAtIndexBenchmark(10000);
    arrayRemoveAtIndexBenchmark(10000);
    arrayAddAtIndexBenchmark(15000);
    arrayRemoveAtIndexBenchmark(15000);
    arrayAddAtIndexBenchmark(20000);
    arrayRemoveAtIndexBenchmark(20000);
    arrayAddAtIndexBenchmark(25000);
    arrayRemoveAtIndexBenchmark(25000);
    cout<<"__Double linked list benchmark__"<<endl;
    linkedListAddFirstBenchmark(5000);
    linkedListGetValueFromRandomIndexBenchmark(5000);
    linkedListRemoveLastBenchmark(5000);
    linkedListAddFirstBenchmark(10000);
    linkedListGetValueFromRandomIndexBenchmark(10000);
    linkedListRemoveLastBenchmark(10000);
    linkedListAddFirstBenchmark(15000);
    linkedListGetValueFromRandomIndexBenchmark(15000);
    linkedListRemoveLastBenchmark(15000);
    linkedListAddFirstBenchmark(20000);
    linkedListGetValueFromRandomIndexBenchmark(20000);
    linkedListRemoveLastBenchmark(20000);
    linkedListAddFirstBenchmark(25000);
    linkedListGetValueFromRandomIndexBenchmark(25000);
    linkedListRemoveLastBenchmark(25000);
    cout<<endl;
    linkedListAddLastBenchmark(5000);
    linkedListRemoveFirstBenchmark(5000);
    linkedListAddLastBenchmark(10000);
    linkedListRemoveFirstBenchmark(10000);
    linkedListAddLastBenchmark(15000);
    linkedListRemoveFirstBenchmark(15000);
    linkedListAddLastBenchmark(20000);
    linkedListRemoveFirstBenchmark(20000);
    linkedListAddLastBenchmark(25000);
    linkedListRemoveFirstBenchmark(25000);
    cout<<endl;
    linkedListAddAtIndexBenchmark(5000);
    linkedListRemoveAtIndexBenchmark(5000);
    linkedListAddAtIndexBenchmark(10000);
    linkedListRemoveAtIndexBenchmark(10000);
    linkedListAddAtIndexBenchmark(15000);
    linkedListRemoveAtIndexBenchmark(15000);
    linkedListAddAtIndexBenchmark(20000);
    linkedListRemoveAtIndexBenchmark(20000);
    linkedListAddAtIndexBenchmark(25000);
    linkedListRemoveAtIndexBenchmark(25000);
    cout<<"__Binary search tree benchmark__"<<endl;
    bstAddBenchmark(5000);
    bstSearchBenchmark(5000);
    bstGetMaxBenchmark(5000);
    bstGetMinBenchmark(5000);
    bstDeleteValueBenchmark(5000);
    bstAddBenchmark(10000);
    bstSearchBenchmark(10000);
    bstGetMaxBenchmark(10000);
    bstGetMinBenchmark(10000);
    bstDeleteValueBenchmark(10000);
    bstAddBenchmark(15000);
    bstSearchBenchmark(15000);
    bstGetMaxBenchmark(15000);
    bstGetMinBenchmark(15000);
    bstDeleteValueBenchmark(15000);
    bstAddBenchmark(20000);
    bstSearchBenchmark(20000);
    bstGetMaxBenchmark(20000);
    bstGetMinBenchmark(20000);
    bstDeleteValueBenchmark(20000);
    bstAddBenchmark(25000);
    bstSearchBenchmark(25000);
    bstGetMaxBenchmark(25000);
    bstGetMinBenchmark(25000);
    bstDeleteValueBenchmark(25000);
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void displayMenu(){
    cout<<"Menu:"<<endl;
    cout<<"1. Operations on binary heap"<<endl;
    cout<<"2. Operations on binary search tree"<<endl;
    cout<<"3. Operations on dynamic array"<<endl;
    cout<<"4. Operations on double linked list"<<endl;
    cout<<"5. Benchmark test"<<endl;
    cout<<"6. Exit"<<endl;
}

void binaryHeapMenu(){
    cout<<"BinaryHeap"<<endl;
    cout<<"1. Add value"<<endl;
    cout<<"2. Pop max"<<endl;
    cout<<"3. Exit"<<endl;
}

void dynamicArrayMenu(){
    cout<<"DynamicArray"<<endl;
    cout<<"1. Add value"<<endl;
    cout<<"2. Add value at certain index"<<endl;
    cout<<"3. Remove value from certain index"<<endl;
    cout<<"4. Display dynamic array"<<endl;
    cout<<"5. Exit"<<endl;
}

void doubleLinkedListMenu(){
    cout<<"DoubleLinkedList"<<endl;
    cout<<"1. Add value at the beginning"<<endl;
    cout<<"2. Add value at certain index"<<endl;
    cout<<"3. Add value at the end"<<endl;
    cout<<"4. Remove value at the beginning"<<endl;
    cout<<"5. Remove value from certain index"<<endl;
    cout<<"6. Remove value at the end"<<endl;
    cout<<"7. Display double linked list"<<endl;
    cout<<"8. Exit"<<endl;
}

void binarySearchTreeMenu(){
    cout<<"BinarySearchTree"<<endl;
    cout<<"1. Add value"<<endl;
    cout<<"2. Search value"<<endl;
    cout<<"3. Delete value"<<endl;
    cout<<"4. Get max"<<endl;
    cout<<"5. Get min"<<endl;
    cout<<"6. Display binary search tree"<<endl;
    cout<<"7. Exit"<<endl;
}

int main() {
    bool run = true;
    BinaryHeap heap1;
    BinarySearchTree bst;
    DynamicArray array1;
    DoublyLinkedList list1;

    
    int value, index;
    int input; 
    displayMenu();
    cout<<"$ : ";
    cin>>input;
    switch(input){
        case 1:
        // Binary heap
        while(run){  
            system("clear");
            binaryHeapMenu();
            cout<<"$ : ";
            cin>>input;
            switch(input){
                case 1:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                heap1.add(value);
                break;
                case 2:
                cout<<heap1.popMax()<<endl;
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 3:
                run = false;
                break;
            }
        }
        break;
        case 2:
        // Binary search tree
        while(run){
            system("clear");
            binarySearchTreeMenu();
            cout<<"$ : ";
            cin>>input;
            switch(input){
                case 1:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                bst.add(value);
                break;
                case 2:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                if(bst.searchValue(value)){
                    cout<<"Value found!"<<endl;
                }else cout<<"Value not found!"<<endl;
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 3:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                bst.deleteValue(value);
                break;
                case 4:
                cout<<bst.getMax()<<endl;
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 5:
                cout<<bst.getMin()<<endl;
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 6:
                run = false;
                break;
            }
        }

        break;
        case 3:
        // Dynamic array
        while(run){
            system("clear");
            dynamicArrayMenu();
            cout<<"$ : ";
            cin>>input;
            switch(input){
                case 1:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                array1.add(value);
                break;
                case 2:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                cout<<"Enter index"<<endl;
                cout<<"$ : ";
                cin>>index;
                array1.addAtIndex(value, index);
                break;
                case 3:
                cout<<"Enter index"<<endl;
                cout<<"$ : ";
                cin>>index;
                array1.removeAtIndex(index);
                break;
                case 4:
                for(int i = 0; i < array1.getSize(); i++){
                    cout<<"index "<<i<<": ";
                    cout<<array1.getValue(i)<<endl;
                }
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 5:
                run = false;
                break;
            }

        }

        break;
        case 4:
        // Double linked list
        while(run){
            system("clear");
            doubleLinkedListMenu();
            cout<<"$ : ";
            cin>>input;
            switch(input){
                case 1:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                list1.addFirst(value);
                break;
                case 2:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                cout<<"Enter index"<<endl;
                cout<<"$ : ";
                cin>>index;
                list1.addAtIndex(value, index);
                break;
                case 3:
                cout<<"Enter value"<<endl;
                cout<<"$ : ";
                cin>>value;
                list1.addLast(value);
                break;
                case 4:
                list1.removeFirst();
                break;
                case 5:
                cout<<"Enter index"<<endl;
                cout<<"$ : ";
                cin>>index;
                list1.removeAtIndex(index);
                break;
                case 6:
                list1.removeLast();
                break;
                case 7:
                for(int i = 0; i < list1.getSize(); i++){
                    cout<<"index "<<i<<": ";
                    cout<<list1.get(i)<<endl;
                }
                cout<<"Press enter to continue..."<<endl;
                clear_input_buffer();
                getchar();
                break;
                case 8:
                run = false;
                break;
            }
        }

        break;
        case 5:
        benchmark();
        break;
        case 6:
        // End
        break;

    }

    return 0; 
    }