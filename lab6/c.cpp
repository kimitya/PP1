#include <iostream>
using namespace std;

int getEqual (int a[], int b[], int n) {
    int cnt =0;
    for (int i=0; i<n; i++) {
        for (int j=0; i<n; j++) {
            if (a[i]==b[i]) {
                cnt++;
                b[j]=-1;
                break;
            }
        }
    }
}

int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
    int res = getEqual(a,b, n);
    cout << res;
    return 0;
}
