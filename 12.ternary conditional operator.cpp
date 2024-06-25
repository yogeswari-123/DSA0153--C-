#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Read two integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Check if the numbers are equal using ternary conditional operator
    string result = (num1 == num2) ? "Equal" : "Not Equal";

    // Output the result
    cout << "The numbers are " << result << endl;

    return 0;
}

