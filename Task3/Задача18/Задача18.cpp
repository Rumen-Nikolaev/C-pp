#include <iostream>
#include <string>

using namespace std;

int countWords(const string& sentence) {
    int count = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }

    return count;
}

int countSentences(const string& text) {
    int count = 0;
    for (char c : text) {
        if (c == '.' || c == ',' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}

int main() {
    string text;
    cout << "Въведете символен низ с няколко изречения: ";
    getline(cin, text);

    int wordCount = countWords(text);
    int sentenceCount = countSentences(text);

    cout << "Брой думи: " << wordCount << endl;
    cout << "Брой изречения: " << sentenceCount << endl;

    return 0;
}
