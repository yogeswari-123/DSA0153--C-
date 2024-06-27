#include <iostream>

class Number {
private:
    int value;

public:
    
    Number(int v = 0) : value(v) {}

    Number& operator+=(const Number& other) {
        this->value += other.value;
        return *this;
    }

    
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(10);
    Number num2(5);

    std::cout << "Initial values:" << std::endl;
    std::cout << "Number 1: ";
    num1.display();
    std::cout << "Number 2: ";
    num2.display();

    
    num1 += num2;

    std::cout << "After num1 += num2:" << std::endl;
    std::cout << "Number 1: ";
    num1.display();

    return 0;
}
