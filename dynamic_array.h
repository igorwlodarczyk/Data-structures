#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stdexcept>

class DynamicArray {
  private:
    unsigned int size = 0;
    int* arr;

  public:
    DynamicArray(); 
    unsigned int getSize();
    int getValue(unsigned int i);
    void add(int new_element);
    void addAtIndex(int new_element, unsigned int index);
    void removeAtIndex(unsigned int index);
    ~DynamicArray();
};

#endif
