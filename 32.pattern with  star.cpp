#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing '*' in each row
        for (int j = 1; j <= i; ++j) {
            cout << "*"; // Print '*' for each column in the current row
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}

