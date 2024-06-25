#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    if (isPalindrome(inputString)) {
        cout << "\"" << inputString << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputString << "\" is not a palindrome." << endl;
    }
    
    return 0;
}
