#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int sumOfDiagonals(int mat[][MAX_COLS], int rows, int cols) {
    int sum = 0;
    // Sum of main diagonal
    for (int i = 0; i < rows && i < cols; i++) {
        sum += mat[i][i];
    }
    // Sum of secondary diagonal
    for (int i = 0; i < rows && i < cols; i++) {
        sum += mat[i][cols - 1 - i];
    }
    return sum;
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input elements of the matrix
    int mat[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
        
    }

    // Calculate sum of diagonals
    int diagonalSum = sumOfDiagonals(mat, rows, cols);

    // Display the sum of diagonals
    cout << "Sum of diagonals of the matrix: " << diagonalSum << endl;

    return 0;
}

