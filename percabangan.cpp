#include<iostream>

using namespace std;

int main() {
        /*
            if(kondisi) { // aksi akan dijalankan ketika kondisi memenuhi
                aksi
            } else if (kondisi) { // ketika kondisi sebelumnya tidak terpenuhi, maka aksi akan dijalankan ketika kondisi memenuhi
                aksi
            } else { // ketika semua kondisi di atas tidak terpenuhi maka aksi akan dijalankan
                aksi
            }
        */

    int a = 5;
    int b = 10;

    if(a == b) {
        cout << "a = b" << endl;
    } else if (a != b) {
        cout << "a tidak sama dengan b" << endl;
    } else {
        cout << "kondisi diatas tidak ada yg memenuhi" << endl;
    }

    /*
        operator pembanding
        ==      a sama dengan b                 5 == 10 (false)
        !=      a tidak sama dengan b           5 != 10 (true)   
        <=      a kurang dari sama dengan b     5 <= 10 (true)
        >=      a lebih dari sama dengan b      5 >= 10 (false)
        <       a kurang dari b                 5 <  10 (true)
        >       a lebih dari b                  5 >  10 (true)
        !       bukan a                         !true   (false)
    */

    // boolean
    // adalah tipe data yang isinya hanya true/false atau 1/0

    bool lapar = 0; // false = 0 | true = 1

    if(lapar) { // if (lapar == true)
        cout << "Makan blog" << endl;
    } else if (!lapar){ // if (lapar != true)
        cout << "Yaudah tidur" << endl;
    }

    return 0;
}