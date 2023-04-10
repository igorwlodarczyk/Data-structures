#include "double_linked_list.h"
#include <stdexcept>

DoublyLinkedList::DoublyLinkedList() {
  head = nullptr;
  tail = nullptr;
  size = 0;
}


void DoublyLinkedList::addFirst(int value) {
  Node *newNode = new Node(value);
  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
  size++;
}

void DoublyLinkedList::addLast(int value) {
  Node *newNode = new Node(value);
  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  size++;
}

void DoublyLinkedList::addAtIndex(int value, int index) {
  if (index < 0 || index > size) {
    throw std::out_of_range("Wrong index");
  } else {
    if (index == 0) {
      addFirst(value);
      return;
    }

    if (index == size) {
      addLast(value);
      return;
    }

    Node *newNode = new Node(value);
    Node *current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    newNode->prev = current;
    newNode->next = current->next;
    current->next->prev = newNode;
    current->next = newNode;
    size++;
  }
}

void DoublyLinkedList::removeFirst() {
  if (head == nullptr) {
    return;
  }

  Node *temp = head;
  head = head->next;
  if (head != nullptr) {
    head->prev = nullptr;
  } else {
    tail = nullptr;
  }

  delete temp;
  size--;
}

void DoublyLinkedList::removeLast() {
  if (head == nullptr) {
    return;
  }

  Node *temp = tail;
  tail = tail->prev;
  if (tail != nullptr) {
    tail->next = nullptr;
  } else {
    head = nullptr;
  }

  delete temp;
  size--;
}

void DoublyLinkedList::removeAtIndex(int index) {
  if (index < 0 || index > size - 1) {
    throw std::out_of_range("Wrong index");
  } else {
    if (index == 0) {
      removeFirst();
      return;
    }

    if (index == size - 1) {
      removeLast();
      return;
    }

    Node *current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    if (current->next != nullptr) {
      current->next->prev = current->prev;
    } else {
      tail = current->prev;
    }

    current->prev->next = current->next;
    delete current;
    size--;
  }
}

int DoublyLinkedList::get(int index) {
  if (index < 0 || index >= size) {
    throw std::out_of_range("Wrong index");
  } else {
    Node *current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    return current->data;
  }
}

unsigned int DoublyLinkedList::getSize() { return size; }

DoublyLinkedList::~DoublyLinkedList() {

  Node *current = head;
  while (current != nullptr) {
    Node *temp = current;
    current = current->next;
    delete temp;
  }
}
