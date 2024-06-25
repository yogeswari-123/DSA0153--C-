#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
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

    // Input value to find occurrences
    int value;
    cout << "Enter the value to find occurrences: ";
    cin >> value;

    // Call function to count occurrences
    int occurrences = countOccurrences(arr, size, value);

    // Display the number of occurrences
    cout << "Number of occurrences of " << value << " in the array: " << occurrences << endl;

    return 0;
}

