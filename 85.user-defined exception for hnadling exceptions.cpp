#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
private:
    const char* message; 

public:
    CustomException(const char* msg) : message(msg) {}

    virtual const char* what() const throw() {
        return message;
    }
};


void validateNumber(int number) {
    if (number <= 0) {
        throw CustomException("Number must be positive.");
    }
}

int main() {
    try {
        int num;
        std::cout << "Enter a positive number: ";
        std::cin >> num;

        validateNumber(num); 

        std::cout << "Valid number entered: " << num << std::endl;
    } catch (const CustomException& e) {
        std::cerr << "Custom Exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

