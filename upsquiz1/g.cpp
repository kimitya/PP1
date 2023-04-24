#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, sum=0;
    cin >> n;
    int arr[n];

    int mx= INT_MIN;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }

    for (int i=0; i<n; i++) {
        if (arr[i]> mx) {
            mx=arr[i];
        }
    }
    cout << sum << " " << mx;

    return 0;
}