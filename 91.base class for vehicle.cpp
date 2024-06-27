#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0;
};

class Car : public Vehicle {
public:
    void drive() override { cout << "Driving a car." << endl; }
};

class Truck : public Vehicle {
public:
    void drive() override { cout << "Driving a truck." << endl; }
};

int main() {
    Car car;
    Truck truck;

    car.drive();   
    truck.drive(); 

    return 0;
}
