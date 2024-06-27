#include <iostream>
#include <stdexcept>

class Array {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize array with given size
    Array(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor to clean up allocated memory
    ~Array() {
        delete[] arr;
    }

    // Overload the [] operator to access array elements
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return arr[index];
    }

    // Const version of the [] operator for read-only access
    const int& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return arr[index];
    }

    // Method to display the array
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array myArray(5);

    
    for (int i = 0; i < 5; ++i) {
        myArray[i] = i * 2;
    }

    std::cout << "Array elements: ";
    myArray.display();

    
    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    try {
   
        std::cout << "Element at index 5: " << myArray[5] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
