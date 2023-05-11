// CORNELIUS LINUX_122140079
#include<iostream>

using namespace std;

struct barang {
    string nama;
    int jumlah;
};

void cari(barang arr[], int n, string targetNama) {
    for (int i = 0; i < n; i++) {
        if(arr[i].nama == targetNama) {
            cout << arr[i].nama << " " << arr[i].jumlah << endl;
            return;
        }
    }
    cout << targetNama << " tidak ada dalam data!\n";
}

int main() {
    int n;
    cout << "Masukkan jumlah barang:";
    cin >> n;
    barang item[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama barang ke-" << i +1 << ": "; cin >> item[i].nama;
        cout << "Masukkan jumlah barang ke-" << i +1 << ": "; cin >> item[i].jumlah;
    }

    string namaCari;
    cout << "\nMasukkan nama barang yang ingin dicari:";
    cin >> namaCari;

    cari(item, n, namaCari);
}