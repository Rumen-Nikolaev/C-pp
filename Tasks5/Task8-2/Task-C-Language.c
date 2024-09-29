#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size) {
    for(int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        // Insert key into the correct position
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main() {
    int data[] = {9, 4, 8, 3, 1};
    int size = sizeof(data) / sizeof(data[0]);
    
    // Perform insertion sort
    insertionSort(data, size);
    
    // Print sorted array
    cout << "Sorted array in ascending order:" << endl;
    printArray(data, size);

    return 0;
}
