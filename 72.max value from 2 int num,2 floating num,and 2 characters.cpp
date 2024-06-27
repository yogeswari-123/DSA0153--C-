#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}


float max(float a, float b) {
    return (a > b) ? a : b;
}


char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
      int int1 = 10, int2 = 20;
    std::cout << "Max of integers: " << max(int1, int2) << std::endl;

   
    float float1 = 10.5f, float2 = 20.5f;
    std::cout << "Max of floating-point numbers: " << max(float1, float2) << std::endl;

    char char1 = 'A', char2 = 'Z';
    std::cout << "Max of characters: " << max(char1, char2) << std::endl;

    return 0;
}
