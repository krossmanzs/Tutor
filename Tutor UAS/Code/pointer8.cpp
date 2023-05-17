#include <iostream>
using namespace std;

int main() {
    int angka[3] = {3,12,6};

    cout << "alamat angka: " << angka << endl;
    cout << "nilai angka: " << *(angka + 2) << endl;

    return 0;
}
