#include <iostream>
#include <string>

using namespace std;

int main() {
    string* names = new string[100];
    int nameCount = 0;
    string name;
    char startLetter;

    cout << "Въведете имена (въведете '0' за край на въвеждането):" << endl;
    while (getline(cin, name) && name != "0" && nameCount < 100) {
        names[nameCount++] = name;
    }

    cout << "Въведете началната буква, с която искате да започват имената: ";
    cin >> startLetter;

    cout << "Имената, които започват с '" << startLetter << "' са:" << endl;
    for (int i = 0; i < nameCount; ++i) {
        if (!names[i].empty() && names[i][0] == startLetter) {
            cout << names[i] << endl;
        }
    }

    delete[] names;

    return 0;
}

