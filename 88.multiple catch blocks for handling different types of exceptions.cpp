#include <iostream>
#include <stdexcept>

void processNumber(int num) {
    if (num < 0) {
        throw std::invalid_argument("Number must be non-negative.");
    } else if (num == 0) {
        throw std::runtime_error("Zero is not allowed.");
    } else if (num % 2 != 0) {
        throw "Number must be even."; 
    }
}

int main() {
    try {
        int num;
        std::cout << "Enter an even positive number: ";
        std::cin >> num;

        processNumber(num); 

        std::cout << "Valid number entered: " << num << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid Argument Exception caught: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime Error Exception caught: " << e.what() << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    } catch (...) {
        std::cerr << "Unknown Exception caught." << std::endl;
    }

    return 0;
}

