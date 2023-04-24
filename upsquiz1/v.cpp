#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i=0; i<=a; i++) {
        unsigned long long x = pow(2,i);
        cout<<x << endl;
    }
    return 0; 
}