#include <iostream>
#include <vector>
using namespace std;

void Dihotomichno(vector<int> arr1) {
    int x = 4;
    int n = arr1.size(); 
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if (arr1[mid] == x) {
            cout << "chisloto " << x << " e na " << mid << " index" << "\n";
            return;
        }
        if (arr1[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
}

void anchor(vector<char> arr2) {
    char searchLetters[] = {'а', 'б', 'в', 'г'};
    int numLetters = sizeof(searchLetters) / sizeof(searchLetters[0]);
    
    for(int i = 0; i < numLetters; ++i) {
        char target = searchLetters[i];
        int checks = 0;
        bool found = false;
        
        for(int j = 0; j < arr2.size(); ++j) {
            ++checks;
            if (arr2[j] == target) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "The letter " << target << " was found after " << checks << " checks." << endl;
        } else {
            cout << "The letter " << target << " was not found after " << checks << " checks." << endl;
        }
    }
}

void Cql_vector(vector<char> arr3) {
    bool sequence_arr[6] {false, false, false, false, false, false, false};
    char sequence_check[6] = {'9', '8', '7', 'я', 'ъ', 'о'};
    int sequence_index = 0;
    
    cout << "Nashiq masiv: " << endl;
    int count = arr3.size();
    for(int i = 0; i < count; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\n";
    
    for(int i = 0; i < count; i++) {
        if (arr3[i] == sequence_check[sequence_index]) {
            cout << "Posledovatelnost(" << i + 1 << ") - ";
            cout << sequence_arr[sequence_index] << "->";
            sequence_arr[sequence_index] = true;
            cout << sequence_arr[sequence_index] << endl;
            sequence_index++;
        }
    }
    
    cout << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Posledovatelnost" << i + 1 << ") -";
        
        if (sequence_arr[i]) {
            cout << "Da" << endl;
        } else {
            cout << "Ne" << endl;
        }
    }
}

int main()
{
    vector<int> arr1 { 3, 4, 5, 6, 7, 8, 9 };
    vector<char> arr2 { 'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v' };
    vector<char> arr3 {'F', '1', '0', '4', '4', '5', '9', 'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v'};
    Dihotomichno(arr1);
    anchor(arr2);
    Cql_vector(arr3);

    return 0;
}
