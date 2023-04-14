#include "dynamic_array.h"

DynamicArray::DynamicArray() {
  arr = nullptr;
  size = 0;
}

unsigned int DynamicArray::getSize() { return size; }

int DynamicArray::getValue(int i) {
  if (i >= size || i < 0) {
    throw std::out_of_range("Wrong index");
  } else {
    return arr[i];
  }
}

void DynamicArray::add(int new_element) {
  int *temp_arr = new int[size + 1];
  for (int i = 0; i < size; i++) {
    temp_arr[i] = arr[i];
  }
  temp_arr[size] = new_element;
  delete[] arr;
  arr = temp_arr;
  size++;
}

void DynamicArray::addAtIndex(int new_element, int index) {
  if (index > size || index < 0) {
    throw std::out_of_range("Wrong index");
  } else {
    int *temp_arr = new int[size + 1];
    for (int i = 0; i < index; i++) {
      temp_arr[i] = arr[i];
    }
    temp_arr[index] = new_element;
    for (int i = index; i < size; i++) {
      temp_arr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = temp_arr;
    size++;
  }
}

void DynamicArray::removeAtIndex(int index) {
  if (index > size - 1 || index < 0) {
    throw std::out_of_range("Wrong index");
  } else {
    int *temp_arr = new int[size - 1];
    for (int i = 0; i < index; i++) {
      temp_arr[i] = arr[i];
    }
    for (int i = index + 1; i < size; i++) {
      temp_arr[i - 1] = arr[i];
    }
    delete[] arr;
    arr = temp_arr;
    size--;
  }
}

DynamicArray::~DynamicArray() { delete[] arr; }
