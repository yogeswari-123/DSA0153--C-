#include <iostream>
#include <limits.h>
using namespace std;

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement = findMin(arr, n);
    int maxElement = findMax(arr, n);

    cout << "Minimum element in the array: " << minElement << endl;
    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}
