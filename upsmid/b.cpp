#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            a[i][j]=1;
        }
    }
    int k;
    cin >> k;
    for (int i =0; i<k; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int k= x1; k<x2; k++){
            for (int l= y1; l<y2; l++) {
                a[k][l]=0;
            }
        }
    }
    int sum =0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]==1) {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;

}