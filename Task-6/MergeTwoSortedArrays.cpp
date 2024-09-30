#include <iostream>
using namespace std;

// Function to merge two sorted arrays into a single sorted array 
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0; // i for arr1, j for arr2, k for mergedArray
    
    // Loop through both arrays until we have compared all elements from either array 
    while(i < size1 && j < size2) {   // Continue untill we reach the end of one array
        if (arr1[i] < arr2[j]) {     // If the current element in arr1 is smaller that arr2's element
            mergedArray[k] = arr1[i];  // Add arr1's element to mergedArray 
            i++;  // Move to the next element in arr1
        } else {
            mergedArray[k] = arr2[i];  // Otherwise, add arr2's element to mergedArray
            j++;   // Move to the next element in arr2 
        }
        k++;  // Move to the next position in mergedArray
    }
    
    // If there are remaining elements in arr1 (after the above loop), add them to mergedArray 
    while(i < size1) {
        mergedArray[k] = arr1[i];  // Add remaining elements from arr1 
        i++;     // Move to the next element in arr1
        k++;     // Move to the next element in mergedArray 
    }
    
    // If there are remaining elements in arr2, add them to mergedArray
    while(j < size2) {
        mergedArray[k] = arr2[j] // Add remaining elements from arr2
        j++;  // Move to the next element in arr2
        k++;  // Move to the next position in mergedArray
    }
    
}

int main() {
    // Two sorted arrays defined with elements
    int arr1 = {1, 3, 5}; 
    int arr2 = {2, 4, 6};
    int size1 = 3;
    int size2 = 3;
    
    // Array to store the merged result, with size being the sum of size1 and size2
    int mergedArray[size1 + size2];
    
    // Call the function to merge arr1 and arr2 into mergedArray
    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);
    
    // Display the merged array 
    cout << "Merged array: ";
    for(int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
