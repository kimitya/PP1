#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n][n];
    int mx=INT_MIN;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]>mx) {
                mx = a[i][j];
            }
        }
        int x =0;
        while (x<n) {
            cout << mx << " ";
            x++;
        }
        cout << endl;
        mx = INT_MIN;
    }
    return 0;


}