#include <iostream>

using namespace std;

int main() {
    int num1, num2;

  
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;


    if (num1 > num2) {
        cout << "The first integer, " << num1 << ", is greater than the second integer, " << num2 << "." << endl;
    } else if (num1 < num2) {
        cout << "The second integer, " << num2 << ", is greater than the first integer, " << num1 << "." << endl;
    } else {
        cout << "Both integers are equal." << endl;
    }

    return 0;
}

