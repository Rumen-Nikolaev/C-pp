#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Въведете символен низ: ";
    getline(cin, str);

    char ch;
    cout << "Въведете символ: ";
    cin >> ch;

    int occurrences = countOccurrences(str, ch);

    cout << "Броят на срещанията на символа '" << ch << "' в низа е: " << occurrences << endl;

    return 0;
}
