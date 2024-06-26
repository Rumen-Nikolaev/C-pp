#include <iostream>

using namespace std;

void printTriangle(char letter) {
    int rows = letter - 'A' + 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            char currentLetter = 'A' + j;
            cout << currentLetter << " ";
        }
        cout << endl;
    }

    for (char ch = 'A'; ch <= letter; ch++) {
        cout << ch << " ";
    }
    cout << endl;
}

int main() {
    char letter;
    cout << "Въведете главна буква: ";
    cin >> letter;

    printTriangle(letter);

    return 0;
}
