#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Before swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    
    cout << "\nAfter swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}

