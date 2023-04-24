#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n][n];
    int mx=INT_MIN;
    int imx, jmx;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                if (a[i][j]>mx){
                    mx=a[i][j];
                    imx=i;
                    jmx=j;
                }
            }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: "<< imx+1 << ";" << jmx+1 ;
    return 0;
}