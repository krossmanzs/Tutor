#include<iostream>

using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        int angka;
        cout << "Masukkan nilai ke " << i + 1 << ": ";
        cin >> angka;

        // mengecek jika angka negatif maka program selesai
        if (angka < 0) {
            cout << "Maaf, angka yang anda masukkan bernilai negatif. Program selesai :(" << endl;
            return 0;
        }
    }

    return 0;
}