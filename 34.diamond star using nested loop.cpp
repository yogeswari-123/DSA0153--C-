#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        
        cout << endl; // Move to the next line after printing each row
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}

