#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to merge two arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[], int& mergedSize) {
    mergedSize = size1 + size2;
    int i, j;

    // Copy elements of arr1 to mergedArray
    for (i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements of arr2 to mergedArray
    for (j = 0; j < size2; j++) {
        mergedArray[i + j] = arr2[j];
    }
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1, size2, mergedSize;

    // Input the size of first array and its elements
    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input the size of second array and its elements
    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Call function to merge arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray, mergedSize);

    // Display merged array
    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

