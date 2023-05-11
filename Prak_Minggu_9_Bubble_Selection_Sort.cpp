// CORNELIUS LINUX_122140079
#include<iostream>

using namespace std;

struct barang {
    string nama;
    int jumlah;
};

void printArray(barang arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i].nama << " " << arr[i].jumlah << endl;
    }
    cout << endl; 
}

void selectionSort(barang arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int idx = i;
        for (int j = i+1; j < size; j++) {
            // mencari nilai terkecil
            if (arr[j].jumlah < arr[idx].jumlah) {
                idx = j;
            }
        }
        // swap jika index bukan i
        if (idx != i) {
            barang temp = arr[idx];
            arr[idx] = arr[i];
            arr[i] = temp;
        }
    }
    
}

void bubbleSort(barang arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].jumlah > arr[j+1].jumlah) {
                // swap
                barang temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

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
    bubbleSort(item, n);
    
    string namaCari;
    cout << "\nMasukkan nama barang yang ingin dicari:";
    cin >> namaCari;

    printArray(item, n);

    cari(item, n, namaCari);
}