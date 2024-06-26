#include <iostream>

using namespace std;

double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return x * power(x, n - 1);
    } else {
        return 1 / (x * power(x, -n - 1));
    }
}

int main() {
    double x;
    int n;
    cout << "Въведете реално число x: ";
    cin >> x;
    cout << "Въведете цяло число n: ";
    cin >> n;

    double result = power(x, n);

    cout << x << " на степен " << n << " = " << result << endl;

    return 0;
}
