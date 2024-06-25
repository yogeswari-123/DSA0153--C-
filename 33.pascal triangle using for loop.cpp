#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 0; i < rows; ++i) {
        int number = 1; // Initialize the number for each row
        
        // Print leading spaces for each row
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        
        // Inner loop for columns in each row
        for (int j = 0; j <= i; ++j) {
            cout << number << " "; // Print the current number
            
            // Update the number for the next column
            number = number * (i - j) / (j + 1);
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}

