#include <iostream>
using namespace std;

// Function to check if a number is a Buzz number
bool isBuzz(int num) {
    return (num % 7 == 0) || (num % 10 == 7);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isBuzz(num))
        cout << num << " is a Buzz number." << endl;
    else
        cout << num << " is not a Buzz number." << endl;

    return 0;
}

