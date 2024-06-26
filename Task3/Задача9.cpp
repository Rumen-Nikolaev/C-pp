#include <iostream>
#include <string>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

bool isCelsiusFormat(string temperature) {
    return temperature[temperature.length() - 1] == 'C';
}

int main() {
    string temperature;
    cout << "Enter the temperature (e.g., 21C or 88F): ";
    cin >> temperature;

    double value = stod(temperature.substr(0, temperature.length() - 1));

    if (isCelsiusFormat(temperature)) {
        double convertedTemperature = celsiusToFahrenheit(value);
        cout << "Converted temperature: " << convertedTemperature << "F" << endl;
    } else {
        double convertedTemperature = fahrenheitToCelsius(value);
        cout << "Converted temperature: " << convertedTemperature << "C" << endl;
    }

    return 0;
}
