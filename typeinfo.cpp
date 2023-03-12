#include <iostream>
#include <typeinfo>
using namespace std;
 
int main() {
    int x = 15;
    cout << "Type of x : " << typeid(x).name() << endl;
}