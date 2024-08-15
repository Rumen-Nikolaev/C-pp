Даден масив
#include <iostream>
using namespace std;

int main()
{
    int a[] = {200, 150, 100, 50};
    int n = sizeof(a) / sizeof(a[0]), verification = 0;
    int i, buff, j;
    
    for(int i = 1; i < n; i++) 
    {
        buff = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > buff) 
        {
            a[j + 1] = a[j];
            verification++;
            j--;
        }
        a[j + 1] = buff;
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl << "Verifications: " << verification << endl;

    
    return 0;
}

Обърнат вход
#include <iostream>
using namespace std;

int main()
{
    int a[] = {50, 100, 150, 200};
    int n = sizeof(a) / sizeof(a[0]), verification = 0;
    int i, buff, j;
    
    for(int i = 1; i < n; i++)
    {
        buff = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > buff)
        {
            a[j + 1] = a[j];
            verification++;
            j--;
        }
        a[j + 1] = buff;
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl << "Verifications: " << verification << endl;

    
    return 0;
}
