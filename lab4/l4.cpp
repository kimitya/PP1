#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int mn=INT_MAX;
    int imn, jmn;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int sum =0;

    cout << "coordinates of min elements:"<< endl;

    for (int j=0; j<m; j++) {
        for (int i=0; i<n; i++) {
            if (a[i][j]<mn) {
                mn=a[i][j];
                imn=i;
                jmn=j;
            }
        }
        cout<<imn+1<<";"<<jmn+1<< endl;
        sum+=mn;
        mn=INT_MAX;
    }
    cout<< endl;
    cout << "Their sum:" << endl << sum;

    return 0;
}