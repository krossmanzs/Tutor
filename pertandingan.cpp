#include<iostream>

using namespace std;

int main() {
    int n, y, total = 0;
    cin >> n >> y;

    string nama[n];

    for (int i = 0; i < n; i++) {
        cin >> nama[i];
    }
    
    for (int i = n-1; i >= 0; i--) {
        for (int j = i-1; j >= 0; j--) {
            cout << nama[i] << " vs " << nama[j] << endl;
            total += y;
        }
    }

    cout << total << endl;
    
    return 0;
}