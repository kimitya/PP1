#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, m, imn=0;
    int mn=INT_MAX;
    cin >> n >> m;
    int sum =0;
    int a[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum += a[i][j];
        }
        if (sum<mn) {
            mn=sum;
            imn=i;
        }
        sum=0;
    }
    cout << imn+1;
    return 0;

}