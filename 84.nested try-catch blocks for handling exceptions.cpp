#include <iostream>
#include <stdexcept>

void innerFunction(int divisor) {
    try {
        if (divisor == 0) {
            throw std::invalid_argument("Divisor cannot be zero.");
        }

        int result = 100 / divisor; 
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught invalid_argument inside innerFunction: " << e.what() << std::endl;
        throw; 
    }
}

void outerFunction(int divisor) {
    try {
        innerFunction(divisor);
    } catch (const std::exception& e) {
        std::cerr << "Caught exception inside outerFunction: " << e.what() << std::endl;
        
    }
}

int main() {
    try {
        outerFunction(0); 
    } catch (const std::exception& e) {
        std::cerr << "Caught exception in main: " << e.what() << std::endl;
    }

    return 0;
}

