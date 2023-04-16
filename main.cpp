#include "double_linked_list.h"
#include "dynamic_array.h"
#include "binary_heap.h"
#include "binary_search_tree.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

struct timespec start, end;


void benchmark(){
    srand(time(NULL));
    double elapsed_time;

    // Binary heap benchmark
    BinaryHeap heap2;

    // Adding 100 000 values to the heap
    cout<<"Benchmark_test: Adding 100 000 values to the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < 100000; i++){
        heap2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;

    // Adding 500 000 values to the heap
    cout<<"Benchmark_test: Adding 500 000 values to the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < 500000; i++){
        heap2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;

    // Adding 1000000 values to the heap
    cout<<"Benchmark_test: Adding 1000000 values to the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < 1000000; i++){
        heap2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;

    // Adding 1500000 values to the heap
    cout<<"Benchmark_test: Adding 1500000 values to the heap"<<endl;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i = 0; i < 1500000; i++){
        heap2.add(rand());
    }
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_time = (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    cout<<std::fixed<<std::setprecision(0)<<"Time needed to execute the code: "<<elapsed_time<<" ns"<<endl;


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
    cout<<"6. Exit"<<endl;
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