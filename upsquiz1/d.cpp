#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int l=2;
    while (l<=n) {
        if (n%l==0) {
        cout << l;
        return 0;
        }
        l++;
    }
    cout << l;
    return 0;
}