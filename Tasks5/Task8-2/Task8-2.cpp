#include <iostream>
using namespace std;

int main()
{
    int a[] = { 9, 4, 8, 3, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    
    int i, buff, j;
    for(int i = 1; i < n; i++) 
    {
        buff = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > buff) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = buff;
    }
    
    for(int i = 0; i < n; i++) 
        cout << a[i] << " ";
        cout << endl;

    
    return 0;
}
