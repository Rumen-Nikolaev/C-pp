#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 0, 4, 4, 5, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans;
    cout << "Nashiq masiv: " << endl;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for(int k = 1; k <= 4; k++)
    {
        for(int i = 0; i < n; i++) {
            if (arr[i] == k)
            {
                cout << "Ti x li si ? ";
                ans = i;
                cout << "Elementut " << k << " e x i na mqstoto na " << ans << " index" << endl;
            }
        }
    }

    cout << "Broi zavurtaniq na ti x li si: " << ans;


    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int n, k, ans, i;
    int arr[] = { 1, 0, 4, 4, 5, 9 };
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "Nashiq masiv: " << endl;
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    for(k = 1; k <= 4; k++) 
    {
        for(int i = 0; i < n; i++) {
            if (arr[i] == k) 
            {
                cout << "Ti x li si ? ";
                ans = i;
                cout << "Elementut " << k << " e x i na mqstoto na " << ans << " index" << endl;
            }
        }
    }
    
    cout << "Broi zavurtaniq na ti x li si: " << ans;
    

    return 0;
}


