#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <string>

struct Node_ {
    int value;
    Node_* left;
    Node_* right;
    Node_(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree{
    private:
    unsigned int size;
    Node_* root;

    public:
    BinarySearchTree();
    unsigned int getSize();
    void add(int value);
    bool searchValue(int value);
    void deleteValue(int value);
    int getMax();
    int getMin();
    void printBT(const std::string& prefix, const Node_* node, bool isLeft);
    void printBT(const Node_* node);
    void displayBST();

};

#endif // BINARY_SEARCH_TREE_H
