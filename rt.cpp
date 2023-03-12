#include<iostream>

using namespace std;

int main() {
    int n, x, y, max = -1;
    cin >> n >> x >> y;

    int umur[n];

    for (int i = 0; i < n; i++) {
        cin >> umur[i];
        if ((umur[i] >= x && umur[i] <= y) && umur[i] > max) {
            max = umur[i];
        }
    }
    
    cout << max << endl;
    
    return 0;
}