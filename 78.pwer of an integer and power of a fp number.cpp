#include <iostream>
#include <cmath> // For std::pow

// Function to calculate the power of an integer
int power(int base, int exponent) {
    return static_cast<int>(std::pow(base, exponent));
}

// Function to calculate the power of a double
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int intBase, intExponent;
    double doubleBase, doubleExponent;

    // Calculating the power of an integer
    std::cout << "Enter base and exponent for integer power calculation: ";
    std::cin >> intBase >> intExponent;
    std::cout << intBase << "^" << intExponent << " = " << power(intBase, intExponent) << std::endl;

    // Calculating the power of a floating-point number
    std::cout << "Enter base and exponent for double power calculation: ";
    std::cin >> doubleBase >> doubleExponent;
    std::cout << doubleBase << "^" << doubleExponent << " = " << power(doubleBase, doubleExponent) << std::endl;

    return 0;
}

