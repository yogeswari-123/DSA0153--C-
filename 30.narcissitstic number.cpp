#include <iostream>
#include <cmath>
using namespace std;

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is a narcissistic number
bool isNarcissistic(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isNarcissistic(num))
        cout << num << " is a Narcissistic number." << endl;
    else
        cout << num << " is not a Narcissistic number." << endl;

    return 0;
}

