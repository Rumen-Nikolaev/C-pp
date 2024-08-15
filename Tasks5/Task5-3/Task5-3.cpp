A) First Variant
#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 5;
    int n = sizeof(array) / sizeof(array[0]);
    int low = 0;
    int high = n - 1;
    
    while(low <= high) {
        
        int mid = low + (high - low) / 2;
        
        if (array[mid] == x)
        {
            cout << "chisloto " << x << " e na " << mid << " index";
        }
        
        if (array[mid] < x)
        {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }

    return 0;
}

B) Second Variant
#include <iostream>
using namespace std;

int main()
{
    int i;
    char arr[15] = {'F', '1', '0', '4', '4', '5', '9', 'N', 'i', 'k', 'o', 'l', 'a', 'e', 'v'};
    bool sequence_arr[7] = {false, false, false, false, false, false, false};
    char sequence_check[7] = {'9', '8', '7', 'a', 'b', 'c', 'd'}; // Use ASCII characters for simplicity
    int sequence_index = 0;
    int count = sizeof(arr) / sizeof(arr[0]);

    cout << "Nashiq masiv: " << endl;
    cout << count << endl;

    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i < 15; i++) {
        if (arr[i] == sequence_check[sequence_index]) 
        {
            cout << "Posledovatelnost(" << i + 1 << ") - ";
            cout << sequence_arr[sequence_index] << "-> ";
            sequence_arr[sequence_index] = true;
            cout << sequence_arr[sequence_index] << endl;
            sequence_index++;
        }
    }
    
    cout << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Posledovatelnost(" << i + 1 << ") - ";
        
        if (sequence_arr[i]) {
            cout << "Da" << endl;
        }
        else {
            cout << "Ne" << endl;
        }
    }

    return 0;
}
