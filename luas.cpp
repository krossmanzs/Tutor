#include<iostream>

using namespace std;

int luasTrapesium() {
    int sisi1, sisi2, tinggi;
    cin >> sisi1 >> sisi2 >> tinggi;
    return ((sisi1 + sisi2) * tinggi) * 0.5;
}

int luasBelahKetupat() {
    int diagonal1, diagonal2;
    cin >> diagonal1 >> diagonal2;
    return (diagonal1 * diagonal2) * 0.5;
}

int luasLingkaran() {
    int r;
    cin >> r;
    return 3.14 * r * r;
}

int main() {
    string bangunDatar;
    cin >> bangunDatar;

    if (bangunDatar == "Trapesium") {
        int hasil = luasTrapesium();
        cout << hasil << endl;
    } else if (bangunDatar == "Belah Ketupat") {
        int hasil = luasBelahKetupat();
        cout << hasil << endl;
    } else if (bangunDatar == "Lingkaran") {
        int hasil = luasLingkaran();
        cout << hasil << endl;
    }
    
    return 0;
}