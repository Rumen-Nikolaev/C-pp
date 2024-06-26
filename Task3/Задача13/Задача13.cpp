#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Въведете число: ";
    cin >> n;

    int result = factorial(n);

    cout << "Факториел от " << n << " е: " << result << endl;

    return 0;
}
