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
        try {
            int value = queue.peek();
            std::cout << "Frente de la cola: " << value << std::endl;
        } catch (const std::out_of_range& e) {
            std::cout << "Error: " << e.what() << std::endl;
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
    
    return 0;
}
