#include <iostream>
using namespace std;

int main()
{
    int num, count, sum = 1;
    cin >> num >> count;
    
    for(int i = 0; i < count; i++) {
        
        sum *= num;
    }
    
    cout << sum;
    

    return 0;
}
