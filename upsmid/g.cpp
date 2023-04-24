#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, m, s;
    cin >> n >> m >> s;
    int num[m-n];
    int n1=n;
    for (int i=0; i<m-n+1; i++) {
        num[i]=n1;
        n1++;
    }
    // for (int i=0; i<m-n+1; i++) {
    //     cout << num[i] << " ";
    // }
    if (s==1) {
        for (int i=0; i<m-n+1; i++) {
            int x =sqrt(num[i]);
            if (x*x==num[i]) {
                cout << num [i] << " ";
            }
        }
    }
    else if (s==(-1)) {
        for (int i=m-n; i>=0; i--) {
            int x =sqrt(num[i]);
            if (x*x==num[i]) {
                cout << num [i] << " ";
            }
        }
    }
    return 0;

}