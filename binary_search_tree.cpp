#include "binary_search_tree.h"


BinarySearchTree::BinarySearchTree() : size(0), root(nullptr) {}

unsigned int BinarySearchTree::getSize(){
    return size;
}

void BinarySearchTree::add(int value){
    Node_ *newNode = new Node_(value);
    if(root == nullptr){
        root = newNode;
    }else{
        Node_ *temp = root;
        while(1){
            if(value > temp->value){
                if(temp->right == nullptr){
                    temp->right = newNode;
                    break;
                }else{
                    temp = temp->right;
                }
            }else{
                if(temp->left == nullptr){
                    temp->left = newNode;
                    break;
                }else{
                    temp = temp->left;
                }
            }

        }
    }

    size++;
}

bool BinarySearchTree::searchValue(int value){
    Node_ *temp = root;
    while(temp != nullptr){
        if(value == temp->value){
            return true;
        }else{
            if(value > temp->value){
                temp = temp->right;
            }else{
                temp = temp->left;
            }
        }
    }
    return false;
}

void BinarySearchTree::deleteValue(int value){
    Node_ *parent = nullptr;
    Node_ *current = root;

    // Find the node to be deleted and its parent
    while(current != nullptr && current->value != value){
        parent = current;
        if(value > current->value){
            current = current->right;
        }else{
            current = current->left;
        }
    }

    if(current == nullptr){
        // The node to be deleted was not found in the tree
        return;
    }

    // Determine which case applies for the node to be deleted
    if(current->left == nullptr && current->right == nullptr){
        // Case 1: Node has no children (i.e., it is a leaf node)
        if(current == root){
            // Special case for deleting the root node
            root = nullptr;
        }else{
            if(parent->left == current){
                parent->left = nullptr;
            }else{
                parent->right = nullptr;
            }
        }
        delete current;
    }else if(current->left == nullptr || current->right == nullptr){
        // Case 2: Node has one child
        Node_ *child = (current->left != nullptr) ? current->left : current->right;
        if(current == root){
            // Special case for deleting the root node
            root = child;
        }else{
            if(parent->left == current){
                parent->left = child;
            }else{
                parent->right = child;
            }
        }
        delete current;
    }else{
        // Case 3: Node has two children
        // Find the minimum value in the right subtree
        Node_ *successorParent = current;
        Node_ *successor = current->right;
        while(successor->left != nullptr){
            successorParent = successor;
            successor = successor->left;
        }
        // Replace the value of the node to be deleted with the value of the successor
        current->value = successor->value;
        // Delete the successor (which is either a leaf node or has one right child)
        if(successorParent->left == successor){
            successorParent->left = successor->right;
        }else{
            successorParent->right = successor->right;
        }
        delete successor;
    }

    size--;

}


int BinarySearchTree::getMax(){
    if(size > 0){
        Node_ *temp = root;
        while(temp->right != nullptr){
            temp = temp->right;
        }
        return temp->value;
    }else return 0;
}

int BinarySearchTree::getMin(){
    if(size > 0){
        Node_ *temp = root;
        while(temp->left != nullptr){
            temp = temp->left;
        }
        return temp->value;
    }else return 0;
}
