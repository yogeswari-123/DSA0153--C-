#include <iostream>
using namespace std;

int main() {
    int num, originalNum, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Calculate sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // Check if original number is divisible by sum of digits
    if (originalNum % sum == 0)
        cout << originalNum << " is a Harshad number." << endl;
    else
        cout << originalNum << " is not a Harshad number." << endl;

    return 0;
}

