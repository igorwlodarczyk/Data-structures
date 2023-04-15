#include "binary_heap.h"

using std::swap;

int BinaryHeap::getParent(int i) {
    return (i - 1) / 2;
}

int BinaryHeap::getLeftChild(int i) {
    return 2 * i + 1;
}

int BinaryHeap::getRightChild(int i) {
    return 2 * i + 2;
}

int BinaryHeap::getSize() {
    return heap.size();
}

void BinaryHeap::add(int value) {
    heap.push_back(value);
    int i = heap.size() - 1;
    while (i > 0 && heap[i] > heap[getParent(i)]) {
        swap(heap[i], heap[getParent(i)]);
        i = getParent(i);
    }
}

int BinaryHeap::popMax() {
    int max_value = heap[0];
    swap(heap[0], heap[heap.size() - 1]);
    heap.pop_back();
    int i = 0;
    while (getLeftChild(i) < heap.size()) {
        int max = getLeftChild(i);
        if (getRightChild(i) < heap.size()) {
            if (heap[getRightChild(i)] > heap[max]) {
                max = getRightChild(i);
            }
        }

        if (heap[i] < heap[max]) {
            swap(heap[i], heap[max]);
            i = max;
        } else {
            break;
        }
    }
    return max_value;
}
