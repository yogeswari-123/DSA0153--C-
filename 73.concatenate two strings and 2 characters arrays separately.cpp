#include <iostream>
#include <cstring> 
char* concatenate(const char* str1, const char* str2) {
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2 + 1; 

    char* result = new char[totalLen];

    strcpy(result, str1);

    strcat(result, str2);

    return result;
}

std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    
    const char* cstr1 = "Hello, ";
    const char* cstr2 = "world!";
    char* concatenatedCStr = concatenate(cstr1, cstr2);
    std::cout << "Concatenated C-style strings: " << concatenatedCStr << std::endl;
    delete[] concatenatedCStr; 
    std::string cppstr1 = "Hello, ";
    std::string cppstr2 = "world!";
    std::string concatenatedCppStr = concatenate(cppstr1, cppstr2);
    std::cout << "Concatenated C++ strings: " << concatenatedCppStr << std::endl;

    return 0;
}
