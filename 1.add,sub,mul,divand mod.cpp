#include <iostream>

using namespace std;

int main() {
    int num1, num2;
 
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter second integer: ";
    cin >> num2;
    
    
    cout << "Addition: " << num1 + num2 << endl;
   
    cout << "Subtraction: " << num1 - num2 << endl;
 
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division by zero is not allowed!" << endl;
   
    if (num2 != 0)
        cout << "Modulo: " << num1 % num2 << endl;
    else
        cout << "Modulo by zero is not allowed!" << endl;
    
    return 0;
}

