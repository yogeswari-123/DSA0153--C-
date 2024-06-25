#include <iostream>#include <iostream>

using namespace std;

int main() {
    float num1, num2;

  
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

   
    cout << "Addition: " << num1 + num2 << endl;

   
    cout << "Subtraction: " << num1 - num2 << endl;

   
    cout << "Multiplication: " << num1 * num2 << endl;

    
    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division by zero is not allowed!" << endl;

    
    cout << "Modulo operation is not defined for floating-point numbers." << endl;

    return 0;
}

