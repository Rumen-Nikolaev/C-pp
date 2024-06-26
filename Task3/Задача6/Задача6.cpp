#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int prev1 = 1;
        int prev2 = 1;
        int fib = 0;
        for (int i = 3; i <= n; i++) {
            fib = prev1 + prev2;
            prev1 = prev2;
            prev2 = fib;
        }
        return fib;
    }
}

int main() {
    int n;
    cout << "Въведете поредния номер на члена от редицата на Фибоначи: ";
    cin >> n;

    int result = fibonacci(n);

    cout << "n-тият член на редицата на Фибоначи е: " << result << endl;

    return 0;
}
