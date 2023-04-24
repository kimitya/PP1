#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

bool findK (vector <int> v, int k) {
    for (int i=0; i<v.size(); i++) {
        if (v[i]==k) {
            return true;
        }
    }
    return false;
}

int main () {
    int n, k;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    if (findK(v, k)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}
