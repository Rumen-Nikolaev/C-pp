#include <iostream>
using namespace std;

int sumOfEvenNumberInArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0 || i == 0) {
            cout << arr[i] << endl;
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,4,4,5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "SUM: " << sumOfEvenNumberInArray(arr, size);
}
