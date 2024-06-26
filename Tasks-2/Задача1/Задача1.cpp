#include <iostream>
using namespace std;
int Sum(int n, int k) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i + 1 + k * i;
        cout << "Sum: " << sum << endl;
    }
    cout << "Final Sum: ";
    return sum;
}
int main() {
   cout << Sum(2, 2);
    return 0;
}
