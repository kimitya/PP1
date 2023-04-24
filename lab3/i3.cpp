#include <iostream>
using namespace std;
int main () {
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        if (i==l-1) {
            for (int j=r-1; j>=l-1; j--) {
                //cout << "...";
                cout << arr[j] << " ";
            }
            i=i+(r-l);
        }
        else 
            cout << arr[i] << " ";
    }
    return 0;
}