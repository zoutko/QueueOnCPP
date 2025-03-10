#include "Node.cpp"

template <typename T>
class MyQueue{
    private:
        Node<T> head;
        Node<T> tail;
    public:
        MyQueue():head(nullptr), tail(nullptr){}
        void push(T);
        T poll();
        T peek();
        bool isEmpty();

    void push(T data){
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->setNext = newNode;
            tail = newNode;
        }
    }

    bool isEmpty() {
        return head == nullptr;
    }

    T poll() {
        if (isEmpty()) {
            return T;
        }
    
        T data = head->getData();
        Node<T>* temp = head; 
        head = head->getNext(); 
    
        if (head == nullptr) {  
            tail = nullptr;
        }
    
        delete temp;
        return data;
    }
    
    T peek() {
        if (!isEmpty()) {
            return T;
        }
        return head->getData(); 
    }



};