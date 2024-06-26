#include <iostream>

using namespace std;

int* findDivisors(int number, int& size) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    int* divisors = new int[count];
    int index = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            divisors[index] = i;
            index++;
        }
    }

    size = count;
    return divisors;
}

int main() {
    int number;
    cout << "Въведете естествено число: ";
    cin >> number;

    int size;
    int* divisors = findDivisors(number, size);

    cout << "Делителите на числото " << number << " са: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    delete[] divisors;

    return 0;
}
