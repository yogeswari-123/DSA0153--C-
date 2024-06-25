#include <iostream>
using namespace std;

// Function to calculate sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to check if a number is an abundant number
bool isAbundant(int num) {
    return sumOfDivisors(num) > num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAbundant(num))
        cout << num << " is an Abundant number." << endl;
    else
        cout << num << " is not an Abundant number." << endl;

    return 0;
}

