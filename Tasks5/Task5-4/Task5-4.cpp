#include <iostream>
#include <vector>
using namespace std;

void Dihotomichno(vector<int> arr1) {
    int x = 4;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if (arr1[mid] == x) {
            cout << "chisloto " << x << " e na " << mid << " index" << "\n";
        }
        if (arr1[mid] < x) {
            low = mid + 1;
        } else {
            hig = mid - 1;
        }
    }
}

void anchor(vector<char> arr1) {
    int count, i;
    char element;
    char arr2[] = {'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v'};
    cout << "Nashiq masiv: " << endl;
    count << sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Tursim element: ";
    cin >> element;
    
    for(int i = 0; i < count; i++) {
        if (arr[i] == element) {
            cout << "Elementa e na index: " << i << "\n";
        }
    }
    arr[i] = element;
    cout << "New arr: ";
    for(int i = 0; i < count + 1; i++) {
        cout << arr[i];
    }
    cout << "\n";
}

void Cql_vector(vector<char> arr1) {
    int count, i;
    bool sequence_arr[7] {false, false, false, false, false, false, false};
    char sequence_check[7] = {'9', '8', '7', 'я', 'ъ', 'о'};
    int sequence_index = 0;
    
    cout << "Nashiq masiv: " << endl;
    count << sizeof(arr1) / sizeof(arr1[0]);
    for(int i = 0; i < count; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\n";
    
    for(int i = 0; i < 15; i++) {
        if (arr1[i] == sequence_check[sequence_index]) {
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
        
        IF (sequence_arr[i]) {
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
