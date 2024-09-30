#include <iostream>
using namespace std;

// Function to reverse the array using two-pointer approach
void reverseArray(int arr[], int size) {
    int start = 0;        // Initialize the starting pointer 
    int end = size - 1   // Initialize the ending pointer 
                
    // Swap elements while the start pointer is less than the end pointer 
    while (start < end) {
        // Swap the elements 
        swap(arr[start], arr[end]);
        // Move the pointers towards the center 
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) 
       cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Input array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    cout << "Original array: ";
    printArray(arr, size);  // Print the original array
    
    reverseArray(arr, size); // Reverse the array 
    
    cout << "Reversed array: ";
    printArray(arr, size);  // Print the reversed array

    return 0;
}
