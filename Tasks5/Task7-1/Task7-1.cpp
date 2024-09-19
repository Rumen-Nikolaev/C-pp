#include <iostream>
using namespace std;

int main()
{
    int n, *arr, *sum_arr, counter = 0;
    cin >> n;
    
    if (n % 2 == 0) 
    {
        arr = new int[n];
        sum_arr = new int[n / 2];
        for(int i = 0; i < n; i++) 
        {
            arr[i] = i + 1;
        }
        
        for(int i = 0, j = n - 1; i < n/2; i++, j--, counter++) 
        {
            sum_arr[i] = arr[i] + arr[j];
        }
        
        for(int i = 0; i < n/2; i++) {
            cout << sum_arr[i] << endl;
        }
        
        cout << "Times modified: " << counter << endl;
        cout << "Sum: " << sum_arr[0] * n / 2 << endl;
    }
    else {
        cout << "ne trqbva da e chetno chislo";
    }

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int n, comparisons = 0; 
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Apply Gauss' formula for sum of first n natural numbers
    int sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural numbers (Gauss' formula): " << sum << endl;
    
    // Create array and fill it with first n natural numbers
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    // Implement Selection Sort and count comparisons
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++; // Count each comparison
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
    
    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Output the total number of comparisons made by Selection Sort
    cout << "Total comparisons made by Selection Sort: " << comparisons << endl;
    
    delete[] arr; // Free dynamically allocated memory
    return 0;
}
