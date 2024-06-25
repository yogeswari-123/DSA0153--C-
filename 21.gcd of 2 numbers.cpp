#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int gcd;
    
    do {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    } while (num1 != num2 && num1 != 0);
    
    gcd = (num1 == 0) ? num2 : num1;
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    
    return 0;
}

