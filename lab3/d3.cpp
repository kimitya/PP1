#include <iostream>

using namespace std;
int main () {
    int n;
    int mx, max_pos;

    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    mx = arr[0];

    for (int i=0; i<n; i++) {
        if (arr[i]>mx) {
            mx=arr[i];  
            max_pos=i+1;      
        }
    }
    cout << max_pos;

    return 0;
}