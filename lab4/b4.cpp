#include <iostream>
#include <limits.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n][n];
    int mx=INT_MIN;
    int second =INT_MIN;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j]>=mx) {
                mx=arr[i][j];
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j]> second && arr[i][j] <mx) {
                second = arr[i][j];
            }
        }
    }
    if (second== INT_MIN) {
        cout << 0;
    }
    else cout << second;
    return 0;
}
