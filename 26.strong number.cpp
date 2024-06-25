#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

// Function to check if a number is a strong number
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isStrong(num))
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;
    
    return 0;
}

