#include<iostream>

using namespace std;

int main() {
    int a = 10;

    /*
        for(variabel awal, kondisi, operasi) {
            aksi
        }
    */

    /*
        i++     menambahkan sebanyak 1 nilai
        i--     mengurangi sebanyak 1 nilai
        i+=a    menambahkan sebanyak a nilai
        i-=a    mengurangi sebanyak a nilai 
        i/=a    membagi sebanyak a nilai
        i*=a    mengalikan sebanyak a nilai
        i%=a    memodulokan sebanyak a nilai
    */

    /*
        % = MODULO (sisa bagi)
        5 % 2 = 1

        1 x 2 = 2
        2 x 2 = 4

        sisa bagi:
        5 - 4 = 1



        11 % 3 = 2

        3 x 1 = 3
        3 x 2 = 6
        3 x 3 = 9
        3 x 4 = 12

        sisa bagi:
        11 - 9 = 2
    */


    // looping dari 1 sampai 10
    for (int i = 1; i <= a; i++) {
        cout << "Ini adalah angka ke-" << i << endl;
    }

    cout << endl;

    // looping dari -2 sampai 98   
    for (int i = -2; i < 99; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    // looping dari 28  sampai -2  
    for (int i = 15*2-2; i >= -2; i--)
    {
        cout << i << endl;
    }
    
    cout << endl;

    // output: 0 2 4 6 8 10 12 14  
    for (int i = 0; i <= 15; i+=2) {
        cout << i << endl;
    }


    // perulangan bersarang (nested loop)
    /*
        for() {
            for() {
            }
        }
    */

    int matriks[3][3] = {
        {9,3,4},
        {5,6,7},
        {11,12,1}
    };

    cout << endl;

    /*
        baris = 2
        kolom = 0 1 2
    */

    // loop dari 0 sampai 2
    for (int baris = 0; baris < 3; baris++) {
        // loop dari 0 sampai 2
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriks[baris][kolom] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // loop dari 0 sampai 2
    for (int baris = 0; baris < 3; baris++) {
        // loop dari 0 sampai 2
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriks[kolom][baris] << " ";
        }
        cout << endl;
    }


    cout << endl;

    // loop dari 0 sampai 2
    for (int baris = 0; baris < 3; baris++) {
        // loop dari 0 sampai 2
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << "baris: " << baris << ", kolom: " << kolom << endl;
        }
        cout << endl;
    }
    
    return 0;
}