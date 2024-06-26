#include <iostream>

using namespace std;

int main() {
    int side1, side2;
    cout << "Enter the first side in cm: ";
    cin >> side1;
    cout << "Enter the second side in cm: ";
    cin >> side2;

    int area = side1 * side2;

    cout << "The area of the rectangle is: " << area << " sq. cm" << endl;

    return 0;
}
