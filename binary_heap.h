#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>
#include <string>


class BinaryHeap {
private:
    std::vector<int> heap;

    int getParent(int i);
    int getLeftChild(int i);
    int getRightChild(int i);

public:
    int getSize();
    void add(int value);
    int popMax();
    void displayHeap();
    void displayHeapHelper(const std::string& prefix, int i, bool isLeft);
};

#endif // BINARYHEAP_H
