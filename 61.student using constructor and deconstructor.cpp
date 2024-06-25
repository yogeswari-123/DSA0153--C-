#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& studentName) : name(studentName) {}
    ~Student() {}

    void displayName() {
        std::cout << "Name of the student: " << name << std::endl;
    }

private:
    std::string name;
};

int main() {
    std::string name;

    std::cout << "Enter the name of the student: ";
    std::getline(std::cin, name);

    Student student(name);
    student.displayName();

    return 0;
}
