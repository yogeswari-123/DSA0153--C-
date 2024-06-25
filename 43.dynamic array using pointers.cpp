#include <iostream>
using namespace std;

int main() {
    int size;

    // Input the size of the dynamic array
    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int *dynamicArray = new int[size];

    // Input values into the dynamic array
    cout << "Enter " << size << " values for the dynamic array: ";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }

    // Display values of the dynamic array
    cout << "Values of the dynamic array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] dynamicArray;

    return 0;
}

