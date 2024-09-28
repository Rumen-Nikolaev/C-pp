#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element is the last element
    int i = low; // Pointer for smaller element
    
    for(int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]); // Move smaller elements to the the left
        }
    }
    swap(arr[i], arr[high]) // Place the pivot in its correct position
    return i; // Return the pivot index;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Get the pivot index
        
        quickSort(arr, low, pi - 1);  // Recursively sort elements before pivot
        quickSort(arr, pi + 1, high); // Recursively sort elements after pivot
    }
}



int main()
{
    int arr[] = {7, 3, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n - 1); // Call quicksort on the entire array
    
    cout << "Sortiran masiv: \n";
    for(int i = 0; i < n; i+++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";

    return 0;
}
