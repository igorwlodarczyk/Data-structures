#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>

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
};

#endif // BINARYHEAP_H
