#include <iostream>
using namespace std;

int kurang(int *a, int *b) {
    int hasil = *a - *b;
    return hasil;
}

int jumlah(int *a, int *b) {
    *a = 8;
    return *a + *b;
}

int main(){
    int angka1 = 2;
    int angka2 = 3;
    cout << "angka1: " << angka1 << " || angka2: " << angka2 << endl;
    int hasilJumlah = jumlah(&angka1,&angka2);
    int hasilKurang = kurang(&angka1,&angka2);
    cout << "Hasil jumlah: " << hasilJumlah << endl;
    cout << "angka1: " << angka1 << " || angka2: " << angka2 << endl;
    cout << "Hasil Kurang: " << hasilKurang << endl;
}
