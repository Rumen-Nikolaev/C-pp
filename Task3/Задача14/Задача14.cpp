#include <iostream>

using namespace std;

void sort2(int& num1, int& num2) {
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

int main() {
    int num1, num2;
    cout << "Въведете две числа: ";
    cin >> num1 >> num2;

    cout << "Преди сортирането: num1 = " << num1 << ", num2 = " << num2 << endl;

    sort2(num1, num2);

    cout << "След сортирането: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
