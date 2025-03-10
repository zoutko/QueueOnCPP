#include "Node.cpp"

template <typename T>
class MyQueue{
    private:
        Node<T> head;
        Node<T> tail;
    public: 
        MyQueue();
        // void push(T);
        T poll();
        T peek();
        // bool isEmpty();

    void push(T data){
        Node<T>* newNode = new Node<T>(data);
        if (rear == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

};

template<typename T>
MyQueue<T>:: MyQueue(): head(nullptr),tail(nullptr){}

// template<typename T>
// T MyQueue<T>::push(T data) {
// }

T MyQueue<T>::poll() {
}

template<typename T>
T MyQueue<T>::peek() {
}

// template<typename T>
// T MyQueue<T>::isEmpty() {
// }