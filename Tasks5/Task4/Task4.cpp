#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int Fac = 1;
    
    cin >> n;
    
    for(int i = 2; i <= n; i++) {
        Fac += i;
    }
    
    cout << Fac << endl;

    return 0;
}
