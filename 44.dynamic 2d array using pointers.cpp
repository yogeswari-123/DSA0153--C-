#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the number of rows and columns of the 2D array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for the 2D array
    int *dynamicArray = new int[rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new int[cols];
    }

    // Input values into the 2D array
    cout << "Enter values for the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> dynamicArray[i][j];
        }
    }

    // Display values of the 2D array
    cout << "Values of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
