#include <iostream>

int main() {
    int number = 42;     
    int *ptr = &number;    
    std::cout << "The value of number is: " << *ptr << std::endl;

    return 0;
}

