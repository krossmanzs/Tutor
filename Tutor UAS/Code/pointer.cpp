#include<iostream>

using namespace std;

int main() {
    int angka = 5;
    int umur = 17;
    int tinggi = 150;
    int *a = &angka;
    int *b = &umur;
    int c = tinggi;

    cout << "nilai angka: " << angka << endl;
    cout << "nilai umur: " << umur << endl;
    cout << "nilai tinggi: " << tinggi << endl;
    cout << "alamat angka: " << &angka << endl;
    cout << "alamat umur: " << &umur << endl;
    cout << "alamat tinggi: " << &tinggi << endl << endl;
    
    cout << "nilai a: " << *a << endl;
    cout << "nilai b: " << *b << endl;
    cout << "nilai c: " << c << endl;
    cout << "alamat a: " << a << endl;
    cout << "alamat b: " << b << endl<< endl;

    angka = 10;
    umur = 20;
    tinggi = 100;

    cout << "nilai angka: " << angka << endl;
    cout << "nilai umur: " << umur << endl;
    cout << "nilai tinggi: " << tinggi << endl;
    cout << "alamat angka: " << &angka << endl;
    cout << "alamat umur: " << &umur << endl;
    cout << "alamat tinggi: " << &tinggi << endl << endl;
    
    cout << "nilai a: " << *a << endl;
    cout << "nilai b: " << *b << endl;
    cout << "nilai c: " << c << endl;
    cout << "alamat a: " << a << endl;
    cout << "alamat b: " << b << endl<< endl;

    return 0;
}