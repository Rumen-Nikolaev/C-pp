#include <iostream>
using namespace std;


int main()
{
    int C[10][10], row1 = 3, col1 = 4, row2 = 4, col2 = 2;
    int A[3][4] = { {4, 8, 9, 4}, {3, 5, 1, 7}, {6, 4, 9, 2} };
    int B[4][2] = { {2, 3}, {8, 4}, {9, 1}, {4, 7} };
    cout << "Matricite ni: \n";
    cout << "A:\n";
    
    for(int i = 0; i < row1; ++i) {
        for(int j = 0; j < col1; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "B:\n";
    for(int i = 0; i < row2; ++i) {
        for(int j = 0; j < col2; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i = 0; i < row1; ++i) {
        for(int j = 0; j < col2; ++j) {
            C[i][j] = 0;
        }
    }
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; ++j) {
            for(int k = 0; k < col1; ++k) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    cout << "C:\n";
    for(int i = 0; i < row1; ++i) {
        for(int j = 0; j < col2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
