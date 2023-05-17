#include <iostream>

using namespace std;

void tukar(int *x, int *y){
    int tmp;
    tmp = *x;
    *x  = *y;
    *y  = tmp;
}

int main(){
    int bil_1, bil_2;

    cout << "Input bilangan 1 : "; cin >> bil_1;
    cout << "Input bilangan 2 : "; cin >> bil_2;

    cout << endl;
    cout << "Nilai sebelum ditukar\n";
    cout << "Bilangan 1: " << bil_1 << endl;
    cout << "Bilangan 2: " << bil_2 << endl;

    tukar(&bil_1, &bil_2);

    cout << endl;
    cout << "Nilai setelah ditukar" << endl;
    cout << "Bilangan 1: " << bil_1 << endl;
    cout << "Bilangan 2: " << bil_2;
}
