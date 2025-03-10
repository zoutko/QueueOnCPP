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
    this->data= data;
}

T getData(){
    return data;
}

Node<T>* getNext(){
    return next;
}

void setNext(Node<T> next){
    this->next = next;
}
};
