#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 3, 2, 1, 6};
    int count = 0; 
    int n = 5;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    
    cout << "Broi inversii: " << count << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 0, 4, 4, 5, 9, 2};
    int sum = 0, count = 0;
    for(int i = 0; i < 6; i++) 
    {
        for(int j = i + 1; j < 7; j++)
        {
            count++;
        }
        sum += count;
        count = 0;
        cout << arr[i];
    }
    
    cout << "\n";
    cout << sum;
    
    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 3, 2, 1, 6};
    int count, n = 5;
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    
    cout << "Sortiran masiv: \n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Broi inversii: " << cout << endl;
    
    return 0;
}
