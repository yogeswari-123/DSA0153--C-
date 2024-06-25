#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void multiplyMatrices(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int result[][MAX_COLS], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input the dimensions of the first matrix
    cout << "Enter the number of rows for first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for first matrix: ";
    cin >> cols1;

    // Input the dimensions of the second matrix
    cout << "Enter the number of rows for second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for second matrix: ";
    cin >> cols2;

    if (cols1 != rows2) {
        cout << "Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication." << endl;
        return 1;
    }

    // Input elements of first matrix
    int mat1[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input elements of second matrix
    int mat2[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Declare the result matrix
    int result[MAX_ROWS][MAX_COLS];

    // Call function to multiply matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    // Display the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

