#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int Sum = 0;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        Sum += i;
    }
    
    cout << Sum << endl;

    return 0;
}
