#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Въведете коефициентите на квадратното уравнение (ax^2 + bx + c):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Уравнението има два реални корена:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Уравнението има един реален корен:" << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "Уравнението няма реални корени." << endl;
    }

    return 0;
}
