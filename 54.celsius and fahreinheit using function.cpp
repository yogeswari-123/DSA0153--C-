#include <iostream>
using namespace std;


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}


double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    int choice;

    cout << "Temperature Conversion Menu:\n";
    cout << "1. Convert Celsius to Fahrenheit\n";
    cout << "2. Convert Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double fahrenheit = celsiusToFahrenheit(temperature);
        cout << temperature << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double celsius = fahrenheitToCelsius(temperature);
        cout << temperature << " Fahrenheit is " << celsius << " Celsius." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
