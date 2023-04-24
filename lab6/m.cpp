#include <iostream>
using namespace std;

void coutRev(long long a[], int n) {
    for (int i=n-1; i>=0; i--) {
        cout << a[i] << " ";
    }
}

int main () {
    int n; 
    cin >> n;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    coutRev(a, n);
    // for (int i=n-1; i>=0; i--) {
    //     cout << a[i];
    // }
    return 0;
}