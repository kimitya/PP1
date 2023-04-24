#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    int n;
    cin >>n;
    int arr[n][n];
    int maxx=INT_MIN;
    int imaxx;
    int jmaxx;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j]>maxx) {
                maxx=arr[i][j];
                imaxx=i;
                jmaxx=j;
            }
        }
    }
    cout << imaxx+1 << " " << jmaxx+1;
    return 0;
}