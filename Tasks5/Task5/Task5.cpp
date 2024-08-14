а) First Variant
#include <iostream>
#include <iomanip>

int main()
{
    int c = 0;
    float pi = 0;
    float a = 1;
    int counter = 0;
    
    while(a <= 10000) 
    {
        counter++;
        
        if (c == 0) 
        {
            pi = pi + 4/a;
            c++;
        }
        else {
            pi = pi - 4 / a;
            c--;
        }
        if (counter == 500) {
            cout << fixed << setprecision(15);
            cout << "Pi, Value = " << pi << endl;
        }
        a += 2;
    }

    return 0;
}

a) Second Variant
#include <iostream>
#include <iomanip>

int main()
{
    double arr[2];
    int c = 0;
    float pi = 0;
    float a = 1;
    int counter = 0;
    
    do {
        if (c == 0) {
            pi = pi + 4 / a;
            c++;
        }
        else {
            pi = pi - 4 / a;
            c--;
        }
        
        arr[counter] = pi;
        
        if (counter == 1) {
            counter = 0;
        }
        
        a += 2;
        counter++;
    }
    while (arr[0] - arr[1] > 0.0000001);
    
    return 0;
}

б) First Variant
#include <iostream>
#include <iomanip>

int main()
{
    double arr[2] = { 2, 1 };
    int c = 0;
    float pi = 0;
    float a = 1;
    int counter = 0;
    
    while (arr[0] - arr[1] > 0.0000001) {
        
        if (c == 0) {
            pi = pi + 4 / a;
            c++;
        }
        else {
            pi = pi - 4 / a;
            c--;
        }
        
        arr[counter] = pi;
        
        if (counter == 1) {
            counter = 0;
        }
        
        a += 2;
        counter++;
    }
    
    cout << fixed << setprecision(15);
    cout << arr[0] << "\n" << arr[1] << "\n" << arr[0] - arr[1] << "\n"; 
    
    return 0;
}

б) First Variant
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double arr[2];
    int c = 0;
    float pi = 0;
    float a = 1;
    int counter = 0;
    
    do
    {
        if (c == 0) 
        {
            pi  = pi + 4 / a;
            c++;
        }
        else {
            pi = pi - 4 / a;
            c--;
        }
        
        arr[counter] = pi;
        
        if (counter == 1) {
            counter = 0;
        }
        
        a += 2;
        counter++;
    } while (arr[0] - arr[1] > 0.0000001)
    

    return 0;
}

b) Second Variant
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double arr[2] = { 2, 1 };
    int c = 0;
    float pi = 0;
    float a = 1;
    int counter = 0;
    
    
    while (arr[0] - arr[1] > 0.0000001) {
        
        if (c == 0) {
            pi = pi + 4 / a;
            c++;
        }
        else {
            pi = pi - 4 / a;
            c--;
        }
        
        arr[counter] = pi;
        
        if (counter == 1) {
            counter = 0;
        }
        
        a += 2;
        counter++;
    }
    
    cout << fixed << setprecision(15);
    cout << arr[0] << "\n" << arr[1] << "\n" << arr[0] - arr[1] << "\n";
    

    return 0;
}
