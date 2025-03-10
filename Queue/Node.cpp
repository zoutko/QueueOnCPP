template <typename T>
class Node
{
private:
    T data;
    Node<T>* next;

public:
    Node(T data): data(data), next(nullptr){}
    T getData();
    void setData(T);
    Node<T> *getNext();
    void setNext(Node<T> *);

void setData(T data){
    this->data= dalta;
}

T getData(){
    return data;
}

Node<T> getNext(){
    retrun next;
}

void setNext(Node<T> next){
    this->next = next;
}
};

// template <typename T>
// Node<T>::Node(T data) : data(data), next(nullptr) {}

// template <typename T>
// T Node<T>::getData()
// {
//     return data;
// }

// template <typename T>
// void Node<T>::setData(T data)
// {
//     this->data = data;
// }

// template <typename T>
// Node<T> *Node<T>::getNext()
// {
//     return next;
// }

// template <typename T>
// void Node<T>::setNext(Node<T> *next)
// {
//     this->next = next;
// }
