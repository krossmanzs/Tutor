#include<iostream>

using namespace std;

struct Buku{
    string judul;
    string penerbit;
    int jmlHalaman;

    void printBuku() {
        cout << "Data buku " << judul << endl;
        cout << "Judul: " << judul << endl;
        cout << "Penerbit: " << penerbit << endl;
        cout << "Jumlah Halaman: " << jmlHalaman << endl;
    }
};

int main() {
    Buku ironMen;
    ironMen.judul = "Iron Man 2: Kambek";
    ironMen.penerbit = "Marvel";
    ironMen.jmlHalaman = 99;

    ironMen.printBuku();

    cout << endl;

    Buku berbie;
    berbie.judul = "Berbie: Indosiar";
    berbie.penerbit = "ITERA";
    berbie.jmlHalaman = 12;

    berbie.printBuku();

    Buku buku[3];

    for(int i = 0; i < 3; i++) {
        cout << "Masukkan judul buku: ";
        getline(cin, buku[i].judul);
        cout << "Masukkan penerbit buku: ";
        getline(cin, buku[i].penerbit);
        cout << "Masukkan jumlah halaman buku: ";
        cin >> buku[i].jmlHalaman;
        cin.ignore();
    }

    for (int i = 0; i < 3; i++) {
        buku[i].printBuku();
        cout << endl;
    }
    

    return 0;
}