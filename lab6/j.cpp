#include <iostream>
#include <limits.h>
using namespace std;
int mx=INT_MIN;

int maxx(int a) {
    if (a>mx) {
        mx=a;
    }
    return mx;
}
int main () {
    int a[4];
    for (int i=0; i<4; i++) {
        cin >> a[i];
    }
    for (int i=0; i<4; i++) {
        maxx(a[i]);
        // if (a[i]>mx) {
        //     mx=a[i];
        // }
    }
    cout << mx;
    return 0;
}