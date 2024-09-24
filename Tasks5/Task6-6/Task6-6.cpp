#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 0, 4, 4, 5, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, flag, state = 0, comparison = count - 1, loop = 1;
    for(int i = 0; i < n - 1; i++) {
        cout << "Sustoqnie: " << state << ": ";
        state++;
        for(int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << "\n";
        cout << "Obhojdane: " << loop << ", " << "sravneniq " << comparison;
        loop++;
        comparison--;
        
        cout << endl;
        min = arr[i];
        flag = i;
        
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                flag = j;
            }
        }
        
        arr[flag] = arr[i];
        arr[i] = min;
    }

    return 0;
}
