#include <iostream>
using namespace std;

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

    // Calculate sum of elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = 0.0;
    if (size > 0) {
        average = static_cast<double>(sum) / size;
    }

    // Display average
    cout << "Average of all elements in the array: " << average << endl;

    return 0;
}

