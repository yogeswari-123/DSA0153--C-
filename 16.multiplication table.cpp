#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter the number for multiplication table: ";
    cin >> number;
    
    cout << "Multiplication Table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    
    return 0;
}

