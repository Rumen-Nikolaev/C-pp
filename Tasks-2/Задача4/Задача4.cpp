#include <iostream>	

using namespace std;

int* divisorsOfNum(int integer);


int printArr(int* arr, int sz);
int numberOfDivisors(int integer);

int main() {
    int integer = 10;
    int sz = numberOfDivisors(integer);

    int* dynArr = divisorsOfNum(integer);

    printArr(dynArr, sz);

    if (dynArr != nullptr) {
        delete[] dynArr;
        dynArr = nullptr;
    }
	return 0;
}

int* divisorsOfNum(int integer)
{
    int sz = numberOfDivisors(integer);
    
    int* arr = new int[sz+1];
    int divisor = 0;
    int ctr = 0;
    while (divisor <= integer) {
        divisor++;
        if (integer % divisor == 0) {
            arr[ctr] = divisor;
            ctr++;
        }
    }
    return arr;
}

int printArr(int* arr, int sz)
{
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

int numberOfDivisors(int integer)
{
    int sz = 0;
    int ctr = 0;
    while (ctr <= integer) {
        ctr++;
        if (integer % ctr == 0) sz++;
    }
    return sz;
} 
