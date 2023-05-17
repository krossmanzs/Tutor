#include<iostream>

using namespace std;

// error
// int f(int n) {
//     if (n > 0) {
//         return f(n-1);
//     } else {
//         return ;
//     }
// }

int Faktorial(int n) {
    if (n == 1){
        return 1;
    } else if (n  == 2){
        return 2; //rekursif
    } else {
        return (Faktorial(n-1) + Faktorial(n-2)) ; //basis
    }
}


int main() {
    int n = 4;
    int jumlah2 = Faktorial(n);

    cout << "Jumlah 2: " << jumlah2 << endl;

    cout << "coba: " << f(2) << endl;

    return 0;
}