#include<iostream>

using namespace std;

int f(int n) {
    if(n > 0) {
        return 2*n + f(n-1);
    } else {
        return 0;
    }
}


int main() {
    int n;

    cout << "Masukkan bilangan n:";
    cin >> n;

    int jumlah = f(n);

    cout << jumlah << endl;

    return 0;
}