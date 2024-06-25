#include <iostream>

using namespace std;

int main() {
    int num;

    // Read an integer from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is divisible by 3 using ternary conditional operator
    string result = (num % 3 == 0) ? "divisible by 3" : "not divisible by 3";

    // Output the result
    cout << "The number is " << result << endl;

    return 0;
}

