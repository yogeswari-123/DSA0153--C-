#include <iostream>

class Number {
private:
    int value;

public:
    
    Number(int v = 0) : value(v) {}

    Number operator-(const Number& other) const {
        return Number(this->value - other.value);
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(15);
    Number num2(10);

    std::cout << "Number 1: ";
    num1.display();

    std::cout << "Number 2: ";
    num2.display();

    Number result = num1 - num2;

    std::cout << "Result of subtraction: ";
    result.display();

    return 0;
}
