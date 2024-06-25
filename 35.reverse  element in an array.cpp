#include <iostream>
using namespace std;

// Function to reverse the elements in an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from start and end of the array until start < end
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start index forward and end index backward
        ++start;
        --end;
    }
}

// Function to print the elements in an array
void printArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printArray(arr, size);

    return 0;
}
