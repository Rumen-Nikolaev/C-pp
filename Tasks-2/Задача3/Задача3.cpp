#include <iostream>

#include <string>


using namespace std;

string reverseEachWordInText(string text);

string reverseString(string text);

int main() {

	string text;
	cout << "Enter text: ";
	getline(cin, text);

	reverseEachWordInText(text);

	cout << reverseEachWordInText(text);


	return 0;
}

string reverseEachWordInText(string text) {
	string reversedText = "";
	string word = "";
	for (int i = 0; i < text.length(); i++) {
		if (text[i] != ' ') {
			word += text[i];
		}
		else {
			reversedText += reverseString(word) + " ";
			word = "";
		}
	}
	reversedText += reverseString(word);
	return reversedText;
}

string reverseString(string text)
{
	string reversedText = "";
	for (int i = text.length() - 1; i >= 0; i--) {
		reversedText += text[i];
	}
	return reversedText;
}
