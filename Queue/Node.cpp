template <typename T>
class Node
{
private:
    T data;
    Node<T> next;

public:
    Node(T data);
    T getData();
    void setData(T);
    Node<T> *getNext();
    void setNext(Node<T> *);
};

template <typename T>
Node<T>::Node(T data) : data(data), next(nullptr) {}

template <typename T>
T Node<T>::getData()
{
    return data;
}

template <typename T>
void Node<T>::setData(T data)
{
    this->data = data;
}

template <typename T>
Node<T> *Node<T>::getNext()
{
    return next;
}

template <typename T>
void Node<T>::setNext(Node<T> *next)
{
    this->next = next;
}
