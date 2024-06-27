#include <iostream>

class Callable {
public:
    
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {
    Callable callable;

    int x = 5;
    int y = 10;


    int result = callable(x, y);

    std::cout << "Result of callable(" << x << ", " << y << "): " << result << std::endl;

    return 0;
}
