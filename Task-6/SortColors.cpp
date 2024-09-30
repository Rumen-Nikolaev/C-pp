#include <iostream>
using namespace std;

// Function to sort colors using the Dutch National Flag algorithm
void sortColrs(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;  // Initialize pointers
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            // If the element is 0, swap it to the font
            swap(arr[low], arr[mid]);
            low++;   // Move the low pointer to the next position
            mid++;   // Move the mid pointer to the next position
        } else if (arr[mid] == 1) {
            // If the element is 1, just move the mid pointer
            mid++;
        } else {
            // If the element is 2, swap it to the back
            swap(arr[mid], arr[high]);
            high--;    // Move the high pointer to the previous position
            // We do not increment mid here because the swapped value need to be checked
        }
    }
}


int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    sortColrs(arr, size);
    
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     

    return 0;
}
