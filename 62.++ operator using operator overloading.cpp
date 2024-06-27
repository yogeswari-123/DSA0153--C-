#include <iostream>

class Counter {
private:
    int value;

public:
   
    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        ++value; 
        return *this; 
    }

 
    Counter operator++(int) {
        Counter temp = *this; 
        value++; 
        return temp; 
    }

    
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Counter count(10);

    std::cout << "Initial: ";
    count.display();

    ++count;
    std::cout << "After prefix ++: ";
    count.display();

    count++; 
    std::cout << "After postfix ++: ";
    count.display();

    return 0;
}
