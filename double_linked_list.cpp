#include <stdexcept>


struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};


class DoublyLinkedList {
    private:
    Node* head;
    Node* tail;
    unsigned int size;

    public:
    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void addFirst(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size ++;
    }

    void addLast(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void addAtIndex(int value, unsigned int index){
        if(index < 0 || index > size){
            throw std::out_of_range("Wrong index");
        }else{
            if(index == 0){
                addFirst(value);
                return;
            }

            if(index == size){
                addLast(value);
                return;
            }

            Node* newNode = new Node(value);
            Node* current = head;
            for(int i = 0; i < index; i++){
                current = current->next;
            }
            newNode->prev = current;
            newNode->next = current->next;
            current->next->prev = newNode;
            current->next = newNode;
            size++;
        }
    }

    void removeFirst(){
        if(head == nullptr){
            return;
        }

        Node* temp = head;
        head = head->next;
        if(head != nullptr){
            head->prev = nullptr;
        }else{
            tail = nullptr;
        }

        delete temp;
        size--;
    }

    void removeLast(){
        if(head == nullptr){
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if(tail != nullptr){
            tail->next = nullptr;
        }else{
            head = nullptr;
        }

        delete temp;
        size--;
    } 
};