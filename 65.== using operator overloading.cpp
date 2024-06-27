#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
   
    Person(const std::string& n, int a) : name(n), age(a) {}

   
    bool operator==(const Person& other) const {
        return (name == other.name && age == other.age);
    }

   
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("Alice", 30);
    Person person2("Bob", 25);
    Person person3("Alice", 30);

    std::cout << "Person 1: ";
    person1.display();
    std::cout << "Person 2: ";
    person2.display();
    std::cout << "Person 3: ";
    person3.display();

    if (person1 == person2) {
        std::cout << "Person 1 and Person 2 are equal." << std::endl;
    } else {
        std::cout << "Person 1 and Person 2 are not equal." << std::endl;
    }

    if (person1 == person3) {
        std::cout << "Person 1 and Person 3 are equal." << std::endl;
    } else {
        std::cout << "Person 1 and Person 3 are not equal." << std::endl;
    }

    return 0;
}
