#include "dynamic_array.h"
#include "double_linked_list.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    DoublyLinkedList lista1;
    lista1.addFirst(10);
    lista1.addFirst(5);
    for(int i = 0; i < lista1.getSize(); i++){
        cout<<lista1.get(i)<<endl;
    }
    return 0;
}