#include <iostream>
#include <vector>
#include <iterator>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a, b;
    cin >> a >> b;
    for (int i=0; i<v.size(); i++) {
        if (i==a) {
            for (int j=b; j>=a; j--) {
                cout << v[j] << " ";
            }
            i += b-a;
        }
        else cout << v[i] << " ";
    }
    return 0;
}