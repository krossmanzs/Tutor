#include<iostream>

using namespace std;

/*
    sub program adalah layaknya sebuah fungsi yang berisikan
    potongan kode dan hasilnya akan dikembalikan pada pemanggil
    sub program tersebut

    strukturnya:
    tipe_data nama(param_1, param_2, ...) {
        aksi
        return _nilai_
    }

    tipe data:
    semua tipe data primitif(int, float, double, char)
    struktur data (string, vector, struct)
    intinya semua tipe data



    prosedur adalah sebuah fungsi yang berisikan potongan kode tetapi
    hasilnya tidak dikembalikan pada pemanggil program tersebut

    strukturnya:
    void nama(param_1, param_2, ...) {
        aksi
    }
*/

void aktivitas(string nama, string kegiatan) {
    cout << nama << " sedang " << kegiatan << endl;
}

int penjumlahan(int angka1, int angka2) {
    int hasil = angka1 + angka2;
    return hasil;
}

int getMax() {
    int max;

    for (int i = 0; i < 10; i++) {
        int angka;
        cout << "Masukkan nilai ke " << i + 1 << ": ";
        cin >> angka;

        if(i == 0) {
            max = angka;
        } else if (angka > max) {
            max = angka;
        }

        // mengecek jika angka negatif maka program selesai
        if (angka < 0) {
            cout << "Maaf, angka yang anda masukkan bernilai negatif. Program selesai :(" << endl;
            return -1;
        }
    }

    return max;
}

void tampilkanArray(int data[], int size) {
    for (int i = 0; i < size; i++) { // 0 - 7
        cout << data[i] << " ";
    }

    cout << endl;
}

int main() {
    string orang[3] = {"arip", "patang", "nigajiz"};

    aktivitas(orang[0], "makan");
    aktivitas(orang[1], "belajar");
    aktivitas(orang[2], "turu");

    int a = 10, b = 12;
    int jumlah = penjumlahan(a, b);
    
    cout << jumlah << endl;

    int array1[5] = {2,3,1,25,2}, 
        array2[8] = {5,2,2,1,6,8,89,2};

    tampilkanArray(array1, 5);
    tampilkanArray(array2, 8);

    int max = getMax();

    cout << max << endl;

    return 0;
}