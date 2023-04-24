#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            int h=i+j;
            if (h%2==0) {
                cout << a[i][j]+1 << " ";
            }
            else if (h%2!=0) {
                cout << a[i][j]-1 << " ";
            }
        }
        cout << endl;
    }
    return 0;

    

}