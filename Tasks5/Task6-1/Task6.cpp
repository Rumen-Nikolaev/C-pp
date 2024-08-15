#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Golemina na masiva: ";
    cin >> n;
    int arr[n];
    cout << "Elementi na masiva: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i, index = 0, count;
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        
        if (min > arr[i]) {
            min = arr[i];
            index = i;
        }
        count++;
    }
    
    cout << "Minimalnata stoinost e " << min << " i e s index: " << index << "\n";
    cout << "Broi sravneniq v tazi programa: " << count;
    

    return 0;
}
