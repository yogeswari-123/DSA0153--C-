#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &str) {
    string reversedStr = str;
    int n = reversedStr.length();
    
    for (int i = 0; i < n / 2; i++) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    
    return reversedStr;
}

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    string reversedString = reverseString(inputString);
    
    cout << "Reversed string: " << reversedString << endl;
    
    return 0;
}
