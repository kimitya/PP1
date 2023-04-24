#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    bool boolka = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            if (a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1]){
                boolka = 0;
            }
        }
    }
    if (boolka == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}