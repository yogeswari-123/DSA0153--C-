#include <iostream>
using namespace std;

// Function to delete element at given position
void deleteElement(int arr[], int& size, int position) {
    // Check if position is valid
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    // Shift elements to the left to fill the gap created by deletion
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrement the size of the array
    size--;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Input position to delete element
    int position;
    cout << "Enter the position to delete (0-indexed): ";
    cin >> position;

    // Call function to delete element
    deleteElement(arr, size, position);

    // Display updated array
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

