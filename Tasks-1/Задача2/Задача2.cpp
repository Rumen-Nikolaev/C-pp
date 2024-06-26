#include <iostream>

using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    cout << "Въведете основа: ";
    cin >> base;
    cout << "Въведете степен: ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Степента трябва да бъде неотрицателно число." << endl;
        return 1;
    }

    int result = power(base, exponent);
    cout << base << " на степен " << exponent << " е " << result << "." << endl;

    return 0;
}
