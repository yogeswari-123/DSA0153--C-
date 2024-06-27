#include <iostream>
#include <algorithm> // For std::sort

// Function to sort an integer array
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to sort a double array
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to display an integer array
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to display a double array
void displayArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Sorting an integer array
    int intArray[] = {5, 3, 8, 1, 2};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    displayArray(intArray, intSize);

    sortArray(intArray, intSize);

    std::cout << "Sorted integer array: ";
    displayArray(intArray, intSize);

    // Sorting a double array
    double doubleArray[] = {3.5, 2.1, 5.9, 1.2, 4.3};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original double array: ";
    displayArray(doubleArray, doubleSize);

    sortArray(doubleArray, doubleSize);

    std::cout << "Sorted double array: ";
    displayArray(doubleArray, doubleSize);

    return 0;
}

