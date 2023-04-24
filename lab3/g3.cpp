#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];

    int mx, mn;
    mx=INT_MIN;
    mn=INT_MAX;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        if (arr[i]< mn) {
            mn=arr[i];
        }
    }

    for (int i=0; i<n; i++) {
        if (arr[i]>mx) {
            mx=arr[i]; 
        } 
    }
    //cout << "Min is: " << mn << " And max is: " << mx << endl;

    //cout << "Min is: " << mn << " And max is: " << mx << endl;

    for (int i=0; i<n; i++) {
        if (arr[i]==mx) {
            cout << mn << " ";
        }
        else {
        cout<< arr[i] << " ";
        }
    }



    return 0;
}