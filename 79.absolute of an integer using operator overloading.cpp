#include <iostream>
#include <cmath>
int absolute(int number) {
    return std::abs(number);
}

double absolute(double number) {
    return std::abs(number);
}

int main() {
    int intNumber;
    double doubleNumber;

    std::cout << "Enter an integer: ";
    std::cin >> intNumber;
    std::cout << "Absolute value of " << intNumber << " is " << absolute(intNumber) << std::endl;

    
    std::cout << "Enter a floating-point number: ";
    std::cin >> doubleNumber;
    std::cout << "Absolute value of " << doubleNumber << " is " << absolute(doubleNumber) << std::endl;

    return 0;
}

