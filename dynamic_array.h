#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stdexcept>

class DynamicArray {
private:
  unsigned int size;
  int *arr;

public:
  DynamicArray();
  unsigned int getSize();
  int getValue(int i);
  void add(int new_element);
  void addAtIndex(int new_element, int index);
  void removeAtIndex(int index);
  ~DynamicArray();
};

#endif
