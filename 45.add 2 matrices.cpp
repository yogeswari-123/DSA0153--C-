#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void addMatrices(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input elements of first matrix
    int mat1[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input elements of second matrix
    int mat2[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    // Declare the result matrix
    int result[MAX_ROWS][MAX_COLS];

    // Call function to add matrices
    addMatrices(mat1, mat2, result, rows, cols);

    // Display the result matrix
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

