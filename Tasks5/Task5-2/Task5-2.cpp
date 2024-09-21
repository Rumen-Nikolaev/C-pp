#include <iostream>
using namespace std;

int main() {
    char arr[] = {'Н', 'и', 'к', 'о', 'л', 'а', 'e', 'в'};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    char searchLetters[] = {'а', 'б', 'в', 'г'};
    int numLetters = sizeof(searchLetters) / sizeof(searchLetters[0]);
    
    for(int i = 0; i < numLetters; ++i) {
        char target = searchLetters[i];
        int checks = 0;
        bool found = false;
        
        for(int j = 0; j < size; ++j) {
            ++checks;
            if (arr[j] == target) {
                found = true;
                break;
            }
        }
        
        // Output the result for each letter
        if (found) {
            cout << "The letter " << target << " was found after " << checks << " checks." << endl;
        } else {
            cout << "The letter " << target << " was not found after " << checks << " checks." << endl;
        }
    }
    
    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int count, i;
    char element;
    char arr[] = { 'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v' };
    
    cout << "Nashiq masiv: " << endl;
    
    count = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
    cout << "Tursim element: ";
    cin >> element;
    
    for(int i = 0; i < count; i++) {
        if (arr[i] == element) {
            cout << "Elementa e na index: " << i << "\n";
            return 0;
        }
    }
    
    arr[i] = element;
    cout << "New arr: ";
    for(int i = 0; i < count - 1; i++) {
        cout << arr[i];
    }
    

    return 0;
}
