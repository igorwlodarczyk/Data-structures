#include <vector>

using std::swap;

class BinaryHeap{
    private:
    std::vector<int> heap;

    int getParent(unsigned int i){
        return (i - 1)/2;
    }
    int getLeftChild(unsigned int i){
        return 2 * i + 1;
    }

    int getRightChild(unsigned int i){
        return 2 * i + 2;
    }

    public:
    unsigned int getSize(){
        return heap.size();
    }   

    void add(int value){
        /*
        Insertion
        1. Insert the new item at the end of the heap.
        2. Compare the newly inserted item with its parent. 
            If the parent is larger, stop. If the parent is smaller,  swap the item with its parent.
        3. Repeat step 2 until the parent is larger or equal to the item.
        */
        heap.push_back(value);
        int i = heap.size() - 1;
        while(i > 0 && heap[i] > heap[getParent(i)]){
            swap(heap[i], heap[getParent(i)]);
            i = getParent[i];
        }
    }

    int popMax(){
        /*
        Delete max algorithm
        1. Store the first time in the tree in some temporary variable.
        2. Replace the first node with the item in the last node.
        3. Check the first node with its children nodes. 
            If the left child is larger, we swap it with the left child. 
            If the right node is larger, we swap it with the right node. 
        4. Repeat step 3 until the parent node is larger than the left and right child node.
        5. Return the maximum value (stored in the temporary variable).
        */

        int max_value = heap[0];
        swap(heap[0], heap[heap.size() - 1]);
        heap.pop_back();
        int i = 0;
        while(getLeftChild(i) < heap.size()){
            int max = getLeftChild(i);
            if(getRightChild(i) < heap.size()){
                if(heap[getRightChild(i) > heap[max]]){
                    max = getRightChild(i);
                }
            }

            if(heap[i] < heap[max]){
                swap[heap[i], heap[max]];
                i = max;
            }else{
                break;
            }
        }
        return max_value;
    }


};