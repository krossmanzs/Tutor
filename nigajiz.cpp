#include<iostream>

using namespace std;

bool isAngka(string angka) {
    for(int i = 0; angka[i]; i++) { // looping dari karakter pertama sampai akhir
        if(!(angka[i] >= '1' && angka[i] <= '9')) {
            return false;
        }
    }

    return true;
}

int main() {
    string karakter;

    cin >> karakter;

    if (isAngka(karakter)) {
        cout << karakter << " merupakan angka" << endl;
    } else {
        cout << karakter << " bukan merupakan angka" << endl;
    }

    return 0;
}