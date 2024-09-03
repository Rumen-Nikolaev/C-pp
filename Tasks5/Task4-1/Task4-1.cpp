a)
#include <iostream>
#include <iomanip>
using namespace std;

int Times_h(int x, int times) {
    int res = 1;
    for (int i = 0; i < times; i++) {
        res *= x;
    }
    return res;
}

double fact(int x) {
    double res = 1;
    for (int i = 1; i <= x; i++) {
        res *= i;
    }
    return res;
}

double sinx(int x, int n) {
    double suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += (timesx(x, i) / fact(i));
    }
    return suma;  
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << fixed << setprecision(6) << sinx(x, n) << endl;  
    return 0;
}

б)
#include <iostream>
using namespace std;

double mySixN(double n, int loops) {
    double member = n;
    double sum = 0;
    int Znm = 1;
    for(int i = 0; i < loops; i++) {
        sum += member;
        Znm += 2;
        member = -member * n * n / (Znm * (Znm - 1));
    }
    
    return sum;
}

int main() {
    int loops;
    double n;
    cout << "loops: ";
    cin >> loops;
    cout << "n in radians: ";
    cin >> n;
    cout << mySixN(n, loops) << endl;
    
    return 0;
}
