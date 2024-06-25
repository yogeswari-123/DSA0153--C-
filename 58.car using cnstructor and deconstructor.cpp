#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        cout << "Car object created: " << brand << " " << model << " " << year << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << " " << year << endl;
    }

    // Function to display car information
    void displayInfo() {
        cout << "Car Information: " << brand << " " << model << " " << year << endl;
    }
};

int main() {
    // Creating objects of Car class
    Car myCar("Toyota", "Camry", 2022);
    Car yourCar("Honda", "Civic", 2023);

    // Displaying car information
    myCar.displayInfo();
    yourCar.displayInfo();

    return 0;
}
