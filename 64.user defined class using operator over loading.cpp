#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    
    Person(const std::string& n, int a) : name(n), age(a) {}

   
    friend std::ostream& operator<<(std::ostream& os, const Person& p);
};


std::ostream& operator<<(std::ostream& os, const Person& p) {
    os << "Name: " << p.name << ", Age: " << p.age;
    return os;
}

int main() {
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    std::cout << person1 << std::endl;
    std::cout << person2 << std::endl;

    return 0;
}
