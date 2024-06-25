#include <iostream>

using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5, element, position;

    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position: ";
    cin >> position;

    if (position > n + 1 || position < 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = n; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = element;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

