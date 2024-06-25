#include <iostream>

class Rectangle {
public:
    Rectangle(double len, double wid) : length(len), width(wid) {}
    ~Rectangle() {}

    double calculateArea() {
        return length * width;
    }

private:
    double length;
    double width;
};

int main() {
    double length, width;

    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
