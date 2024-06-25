#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Input a number from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the number is negative
    if (number < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 1; // Exit the program with an error status
    }

    // Calculate factorial using a for loop
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Output the factorial
    std::cout << "Factorial of " << number << " = " << factorial << std::endl;

    return 0;
}

