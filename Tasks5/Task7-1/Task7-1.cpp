#include <iostream>
using namespace std;

int main()
{
    int n, *arr, *sum_arr, counter = 0;
    cin >> n;
    
    if (n % 2 == 0) 
    {
        arr = new int[n];
        sum_arr = new int[n / 2];
        for(int i = 0; i < n; i++) 
        {
            arr[i] = i + 1;
        }
        
        for(int i = 0, j = n - 1; i < n/2; i++, j--, counter++) 
        {
            sum_arr[i] = arr[i] + arr[j];
        }
        
        for(int i = 0; i < n/2; i++) {
            cout << sum_arr[i] << endl;
        }
        
        cout << "Times modified: " << counter << endl;
        cout << "Sum: " << sum_arr[0] * n / 2 << endl;
    }
    else {
        cout << "ne trqbva da e chetno chislo";
    }

    return 0;
}
