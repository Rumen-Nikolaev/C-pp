#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'R', 'u', 'm', 'e', 'n', 'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v'};
    int count = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < count; ++i)
    {
        int min = i;
        for(int j = i; j < count; ++j)
            if (arr[min] > arr[j])
            {
                min = j;
            }
            swap(arr[min], arr[i]);
        }
        
        for(int i = 0; i < count; i++) {
            cout << arr[i] << " ";
        }

    return 0;
}
