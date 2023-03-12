#include<iostream>

using namespace std;

int main() {
    int n, pembelahan = 1;
    cin >> n;

    for(int i = 1; i < 2*n; i++) {
        if(i % 2 != 0) {
            cout << "Tek kotek kotek kotek anak ayam turun " << pembelahan << endl;
            pembelahan *= 2;
        } else {
            cout << "Tek kotek kotek kotek belah diri jadinya " << pembelahan << endl;
        }
    }

    cout << "Tek kotek kotek kotek belah diri mati semua" << endl;


    return 0;
}