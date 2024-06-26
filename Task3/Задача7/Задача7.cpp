#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Преобразуваме символа в малкия регистър

    // Проверяваме дали символът е гласна буква
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void generateRandomArray(char*& arr, int length) {
    arr = new char[length];

    // Генерираме случайни букви и ги записваме в масива
    for (int i = 0; i < length; i++) {
        arr[i] = 'a' + rand() % 26; // Генерираме случайна малка буква
    }
}

void printArray(const char* arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyVowels(const char* source, int sourceLength, char*& destination, int& destinationLength) {
    // Определяме броя на гласните букви
    int vowelCount = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (isVowel(source[i])) {
            vowelCount++;
        }
    }

    // Заделяме памет за масива с гласни букви
    destination = new char[vowelCount];
    destinationLength = vowelCount;

    // Копираме само гласните букви
    int index = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (isVowel(source[i])) {
            destination[index] = source[i];
            index++;
        }
    }
}

int main() {
    srand(time(0)); // Задаваме начална стойност на генератора на случайни числа

    int length;
    cout << "Въведете дължината на масива: ";
    cin >> length;

    char* arr;
    generateRandomArray(arr, length);

    cout << "Масивът със случайно генерирани букви: ";
    printArray(arr, length);

    char* vowelArr;
    int vowelArrLength;
    copyVowels(arr, length, vowelArr, vowelArrLength);

    cout << "Масивът с гласни букви: ";
    printArray(vowelArr, vowelArrLength);

    // Освобождаваме заделената памет за масивите
    delete[] arr;
    delete[] vowelArr;

    return 0;
}
