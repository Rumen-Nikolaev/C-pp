#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 4, 4, 5, 9, 2};
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    
    cout << "Broi inversii: " << count << endl;
    
    return 0;
}




#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 0, 4, 4, 5, 9, 2};
    int sum = 0, count = 0;
    for(int i = 0; i < 6; i++) 
    {
        for(int j = i + 1; j < 7; j++)
        {
            arr[i] == arr[j];
            count++;
        }
        sum += count;
        count = 0;
        cout << arr[i];
    }
    
    cout << arr[6] << endl;
    cout << sum;
    
    return 0;
}
