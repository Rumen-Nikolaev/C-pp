#include <iostream>
using namespace std;

// Функция за обединяване на два подмасива
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Размер на левия подмасив
    int n2 = right - mid;    // Размер на десния подмасив

    // Създаване на времеви масиви
    int* L = new int[n1];
    int* R = new int[n2];

    // Копиране на данни в времевите масиви
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Обединяване на времевите масиви обратно в оригиналния масив
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Копиране на оставащите елементи от L, ако има такива
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Копиране на оставащите елементи от R, ако има такива
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Освобождаване на паметта
    delete[] L;
    delete[] R;
}

// Рекурсивна функция за MergeSort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Намиране на средата

        mergeSort(arr, left, mid); // Сортиране на лявата половина
        mergeSort(arr, mid + 1, right); // Сортиране на дясната половина

        merge(arr, left, mid, right); // Обединяване на двете половини
    }
}

int main() {
    int arr[] = {7, 3, 2, 1, 6}; // Масив за сортиране
    int n = sizeof(arr) / sizeof(arr[0]); // Размер на масива

    mergeSort(arr, 0, n - 1); // Извикване на MergeSort

    cout << "Sortiran masiv: \n"; 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Извеждане на сортирания масив
    }
    cout << "\n";

    return 0;
}
