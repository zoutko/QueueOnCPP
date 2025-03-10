#include <iostream>
#include "../Queue/MyQueue.cpp"
class Tester{
private:
    MyQueue<int> queue;
    
public:
    void addElement(int value) {
        queue.push(value);
    }

    void displayFront() {
            int value = queue.peek();
            std::cout << "Frente de la cola: " << value << std::endl;
    }

    void deleter(){
        int value = queue.poll();
        std::cout << "Elemento eliminado: " << value << std::endl;
    }

    void askEmpty(){
        if (queue.isEmpty())
        {
            std::cout << "La cola esta vacia" << std::endl;
        }else{
            std::cout << "La cola tiene elementos" << std::endl; 
        }    
    }


};


int main() {
    Tester test;
    test.addElement(1);
    
    test.addElement(2);
    test.addElement(3);
    
    test.displayFront();
    test.displayFront();

    test.deleter();
    test.askEmpty();
    
    return 0;
}
