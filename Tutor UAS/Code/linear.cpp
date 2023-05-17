#include<iostream>

using namespace std;

int linear(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int angka[] = {11,23,8,14,30,9,6,17,22};
    int target = 10;

    int cari = linear(angka, 9, target);

    if (cari != -1) {
        cout << "angka " << target << " terdapat pada index " << endl;
    } else {
        cout << "angka " << target << " tidak terdapat pada array" << endl;
    }

    return 0;
}