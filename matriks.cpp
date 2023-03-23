#include<iostream>

using namespace std;

// error
// int n;
// int anjay[n];

const float pi = 3.14;
// global
int n = 1;

// pi * r * r

int main() { // dalam fungsi
    n = 5;
    cout << n << endl;

    int a = 1;

    int arr[5] = {3,6,10,11,13};

    cout << arr[2] << endl;
    cout << arr[10-8] << endl;

    float r = 5.2;
    float luasLingkaran = pi * r * r; 

    //                k      0 1 2   0 1 2   0  1  2
    // int matriks[3][3] = {{9,3,4},{5,6,7},{11,12,1}};
    //                 b       0       1         2
    int matriks[3][3] = {
        {9,3,4},
        {5,6,7},
        {11,12,1}
    };

    cout << matriks[2][1] << endl;

    return 0;
}