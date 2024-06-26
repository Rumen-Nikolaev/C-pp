#include <iostream>
#include <string>

using namespace std;

int calculateAstralNumber(string birthdate) {
    int sum = 0;
    for (char c : birthdate) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    while (sum >= 10) {
        int newSum = 0;
        while (sum > 0) {
            newSum += sum % 10;
            sum /= 10;
        }
        sum = newSum;
    }
    return sum;
}

int main() {
    string birthdate;
    cout << "Enter your birthdate (DDMMYYYY): ";
    cin >> birthdate;

    int astralNumber = calculateAstralNumber(birthdate);

    int guess;
    cout << "Guess your astral number (1-9): ";
    cin >> guess;

    if (guess == astralNumber) {
        cout << "Congratulations! Your astral number matches your guess." << endl;
    } else {
        cout << "Sorry, your astral number does not match your guess." << endl;
        if (guess < astralNumber) {
            cout << "Hint: Your astral number is greater than your guess." << endl;
        } else {
            cout << "Hint: Your astral number is smaller than your guess." << endl;
        }
    }

    return 0;
}
