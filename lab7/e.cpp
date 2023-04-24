#include <iostream>
#include <cmath>
using namespace std;

bool uniqueDivider(int d[], int n, int i) {
    if (i==63) return false;
    if (n==d[i]) return true;
    else return uniqueDivider (d, n, i+1);

}

int main () {
    int n;
    cin >> n;
    int d[63];
    for (int i=0; i<63; i++) {
        d[i]=pow(2,i);
    }
    if (uniqueDivider(d, n, 0)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}