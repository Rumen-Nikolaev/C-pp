#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> x(8); x = {0, 0, 0, 0, 1, 4, 6, 2};
    vector <int> y(8); y = {0, 0, 0, 0, 4, 1, 3, 9};
    vector <int> d(8);
    
    int total, prenos;
    
    for(int i = 7; i >= 0; i--) {
        total = x[i] + y[i] + prenos;
        d[i] = total % 10;
        prenos = total / 10;
    }
    
    for(int i = 0; i < 8; i++) {
        cout << d[i];
    }

    return 0;
}
