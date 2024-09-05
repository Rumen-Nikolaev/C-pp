a) With For
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int *arr, count;
    clock_t c0, c1;
    cout << "Enter size: ";
    cin >> count;
    arr = new int[count];
    srand(time(NULL));
    c0 = clock();
    for(int i = 0; i < count; i++) {
        arr[i] = rand() % 100 + 1;
    }
    
    int i = 0;
    for(;i<count-1;i++) {
        for(int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        i++;
    }
    
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " , ";
    }
    cout << endl;
    c1 = clock();
    cout << "Vreme: " << float(c1 - c0) / CLOCKS_PER_SEC << endl;
    

    return 0;
}

a) With While
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int *arr, count;
    clock_t c0, c1;
    cout << "Enter size: ";
    cin >> count;
    arr = new int[count];
    srand(time(NULL));
    c0 = clock();
    for(int i = 0; i < count; i++) {
        arr[i] = rand() % 100 + 1;
    }
    int i = 0;
    while(i < count - 1) 
    {
        for(int j = 0; j < count - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        i++;
    }
    
    for(int i = 0; i < count; i++) 
    {
        cout << arr[i] << ",";
    }
    
    cout << endl;
    c1 = clock();
    cout << "elapsed wall clock time: " << (float)(c1-c0) / CLOCKS_PER_SEC << endl;

    return 0;
}
