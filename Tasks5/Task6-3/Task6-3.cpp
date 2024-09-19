#include <iostream>
using namespace std;

int main()
{
    int a[]{2, 1, 4, 0, 6, 4, 1, 4, 7};
    int b[];
    int index = 0, min = a[0], max = a[0], size = sizeof(a) / sizeof(a[0]);
    
    for(int i = 0; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    
    b[size-1] = max;
    
    for(int i = 0; i < size - 1; i++) {
        index = 0;
        min = a[0];
        for(int j = 0; j < size - 1; j++) {
            if (a[j] < min) {
                min = a[j];
                index = j;
            }
        }
        a[index] = max;
        b[i] = min;
    }
    
    for(int i = 0; i < size; i++) {
        cout << b[i] << endl;
    }
    

    return 0;
}
