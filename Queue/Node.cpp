template <typename T>
class Node {
private:
    T data;
    Node<T> next;
public:
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

    T getData() const {
        return data;
    }

    void setData(T data) {
        this->data = data;
    }

    Node<T>* getNext() const {
        return next;
    }

    void setNext(Node<T>* next) {
        this->next = next;
    }
};

