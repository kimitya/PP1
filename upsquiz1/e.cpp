#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, s, k;
    cin >>n;
    s=sqrt(n);
    k=s*s;
    if (n==k) {
        cout << "Perfecto";
    }
    else cout << "Simple";
    return 0;
}