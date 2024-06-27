#include <iostream>

int main() {
    float number = 3.14;       
    float *ptr = &number;      
    std::cout << "The value of number is: " << *ptr << std::endl;

    return 0;
}

