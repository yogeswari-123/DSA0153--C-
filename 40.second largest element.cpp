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

    // Initialize largest and second largest variables
    int largest = arr[0];
    int secondLargest = arr[1];

    // Adjust largest and second largest if needed
    if (secondLargest > largest) {
        swap(largest, secondLargest);
    }

    // Find the largest and second largest elements
    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Display the second largest element
    cout << "The second largest element in the array is: " << secondLargest << endl;

    return 0;
}

