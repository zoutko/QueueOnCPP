#include "Node.cpp"

template <typename T>
class MyQueue{
    private:
        Node<T> head;
        Node<T> tail;
    public: 
        MyQueue();
        void push(T);
        T poll();
        T peek();
        bool isEmpty();
};

template<typename T>
MyQueue<T>:: MyQueue(): head(nullptr),tail(nullptr){}

template<typename T>
T MyQueue<T>::push(T data) {
}

T MyQueue<T>::poll() {
}

template<typename T>
T MyQueue<T>::peek() {
}

template<typename T>
T MyQueue<T>::isEmpty() {
}