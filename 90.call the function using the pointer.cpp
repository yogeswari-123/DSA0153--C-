#include <iostream>


void printMessage(const char* message) {
    std::cout << "Message from function: " << message << std::endl;
}

int main() {
    void (*funcPtr)(const char*);

    funcPtr = printMessage;

    funcPtr("Hello, function pointer!");

    return 0;
}

