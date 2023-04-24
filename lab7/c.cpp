#include <iostream>
using namespace std;
bool binarySearch(int a[], int i, int x, int n) {
    if (a[i]==x) return true;
    if (i==n-1) return false;
    else return binarySearch(a, i+1, x, n);
}
int main () {
    int n, x;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> x;
    if (binarySearch(a, 0, x, n)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}