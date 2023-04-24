#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int mx = INT_MIN;
    //int maxproduct=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i!=j) {
                if (a[i]*a[j]>mx) {
                    mx=a[i]*a[j];
                }
            }
        }
    }
    cout << mx;

}