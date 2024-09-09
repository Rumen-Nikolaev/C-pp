#include <iostream>
using namespace std;

int main()
{
    int a[]= {8, 4, 5, 6, 2};
    int n = sizeof(a) / sizeof(a[0]), loc, j, buff;
    
    for(int i = 1; i < n; i++) 
    {
        j = i - 1;
        buff = a[i];
        int low = 0, high = j;
        while(true) 
        {
            if (high <= low)
            {
                if (buff > a[low])
                {
                    loc = low + 1;
                }
                else {
                    loc = low;
                }
                break;
            }
            int mid = (low + high) / 2;
            
            if (buff == a[mid])
            {
                loc = mid + 1;
                break;
            }
            if (buff > a[mid]) 
            {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        while (j >= loc) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = buff;
    }
    
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++) 
    {
        cout << " " << a[i];
    }

    return 0;
}
