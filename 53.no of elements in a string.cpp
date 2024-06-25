#include <iostream>
#include <string>
using namespace std;

int countCharacters(const string &str) {
    return str.length();
}

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    int numCharacters = countCharacters(inputString);
    
    cout << "The number of characters in the string is: " << numCharacters << endl;
    
    return 0;
}
