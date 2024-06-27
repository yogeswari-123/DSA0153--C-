#include <iostream>
#include <stdexcept>

// Example resource class
class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }

    void doSomething() {
        // Simulate some operation that might throw an exception
        throw std::runtime_error("Something went wrong.");
    }
};

int main() {
    try {
        Resource res; // Resource is acquired

        // Simulate some code that may throw an exception
        res.doSomething();

        // This code will not be reached if an exception is thrown
        std::cout << "After exception, inside try block." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        // Resource will be automatically released when 'res' goes out of scope
    }

    // Program continues here
    std::cout << "Program continues after exception handling." << std::endl;

    return 0;
}

