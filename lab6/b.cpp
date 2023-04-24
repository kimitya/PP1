#include <iostream>
using namespace std;

int diffArray (int a1, int b1) {
    if (a1>b1) {
        return a1-b1;
    }
    else return b1-a1;
}
int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin>> b[i];
    }
    for (int i=0; i<n; i++) {
        cout << diffArray(a[i], b[i]) << " ";
    }
    return 0;
    
}