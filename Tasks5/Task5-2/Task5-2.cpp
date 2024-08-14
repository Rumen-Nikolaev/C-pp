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
