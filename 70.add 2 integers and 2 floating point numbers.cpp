#include <iostream>


int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int int1 = 5;
    int int2 = 10;

    float float1 = 5.5f;
    float float2 = 10.5f;

    int intResult = add(int1, int2);
    std::cout << "Sum of integers: " << intResult << std::endl;

    float floatResult = add(float1, float2);
    std::cout << "Sum of floating-point numbers: " << floatResult << std::endl;

    return 0;
}
