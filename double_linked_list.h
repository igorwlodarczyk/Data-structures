#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdexcept>

struct Node {
  int data;
  Node *prev;
  Node *next;

  Node(int value) {
    data = value;
    prev = nullptr;
    next = nullptr;
  }
};

class DoublyLinkedList {
private:
  Node *head;
  Node *tail;
  unsigned int size;

public:
  DoublyLinkedList();

  void addFirst(int value);
  void addLast(int value);
  void addAtIndex(int value, int index);
  void removeFirst();
  void removeLast();
  void removeAtIndex(int index);
  int get(int index);
  unsigned int getSize();

  ~DoublyLinkedList();
};

#endif
