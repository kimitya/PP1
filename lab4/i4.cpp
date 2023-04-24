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
            int s=sqrt(a[i][j]);
            int q=s*s;
            if (q==a[i][j]) {
                cout << s << " ";
            }
            else if (q!=a[i][j]) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;

    

}