#include <iostream>
using namespace std;

int main()
{
    int num, *arr, counter = 0, sum = 0;
    cout << "Enter elements count: ";
    cin >> num;
    arr = new int[num];
    cout << "Array: ";
    for(int i = 0; i < num; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << ",";
    }
    cout << endl;
    
    for(int i = 0; i < num - 1; i++) 
    {
        for(int j = i + 1; j < num; j++) 
        {
            cout << "Comparing: " << arr[i] << " - " << arr[j] << endl;
            counter++;
        }
        sum += counter;
        cout << "Amount of comparisons until now: " << sum << endl;
        counter = 0;
    }
    
    cout << "Total amount: " << sum << endl;

    return 0;
}
