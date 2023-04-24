#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n][n];
    int s=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j==n-1) {
                arr[i][j]=s;
                cout << arr[i][j];
                s++;
            }
            else cout << ".";
        }
            cout << endl;
    }

    return 0;
}