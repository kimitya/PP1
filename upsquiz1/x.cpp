#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >>c;
    if (a==b && b==c && b==c) {
        cout << "NO";
        return 0;
    }
    if (a==b || b==c || a==c) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}