#include <iostream>
using namespace std;
int a[1001][1001];

void transArr(int n, int m) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main () {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    // for (int i=0; i<m; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << a[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    transArr(n, m);
}