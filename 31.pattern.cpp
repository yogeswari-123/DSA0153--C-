#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing the digits
        for (int j = 1; j <= i; ++j) {
            cout << i;  // Print the current row number 'i'
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}

