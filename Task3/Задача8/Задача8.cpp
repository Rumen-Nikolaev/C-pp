#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, string> pilishDictionary;

void initializeDictionary() {
    pilishDictionary["кокошка"] = "пикокошкапа";
    pilishDictionary["пиле"] = "пипиле";
    pilishDictionary["птица"] = "пиптица";
    pilishDictionary["яйце"] = "пияйце";
    // Добавете още думи по желание
}

string translateToPilish(const string& word) {
    string translatedWord = "пи";
    for (size_t i = 0; i < word.length(); i++) {
        translatedWord += word[i];
        if (i != word.length() - 1) {
            translatedWord += "пи";
        }
    }
    return translatedWord;
}

string translateToBulgarian(const string& word) {
    if (word.substr(0, 2) == "пи") {
        return word.substr(2);
    } else {
        return "";
    }
}

int main() {
    initializeDictionary();

    cout << "Моля, изберете опция:" << endl;
    cout << "1. Превод от Български на Пилешки" << endl;
    cout << "2. Превод от Пилешки на Български" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Въведете дума на Български: ";
        string word;
        cin >> word;

        if (pilishDictionary.find(word) != pilishDictionary.end()) {
            cout << "Преводът на думата \"" << word << "\" на Пилешки е: ";
            cout << pilishDictionary[word] << endl;
        } else {
            cout << "Няма наличен превод на думата \"" << word << "\"." << endl;
        }
    } else if (choice == 2) {
        cout << "Въведете дума на Пилешки: ";
        string word;
        cin >> word;

        string translatedWord = translateToBulgarian(word);
        if (!translatedWord.empty()) {
            cout << "Преводът на думата \"" << word << "\" на Български е: ";
            cout << translatedWord << endl;
        } else {
            cout << "Няма наличен превод на думата \"" << word << "\"." << endl;
        }
    } else {
        cout << "Невалиден избор." << endl;
    }

    return 0;
}
