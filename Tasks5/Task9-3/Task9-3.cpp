#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrica;
    int num, x;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        vector<int> arr;
        for(int j = 0; j < num; j++) {
            cin >> x;
            arr.push_back(x);
        }
        matrica.push_back(arr);
    }
    
    for(int r = 0, c = num - 1; r < num; r++, c--)
    {
        cout << matrica[r][c] << endl;
    }

    return 0;
}
