#include <iostream>
using namespace std;
int main () {
    int n, m, b, a, a1;
    cin >> n >> m >> b;
    a=n+m;
    a1=a/10;
    if (a1>=b) {
        cout << "You are my sweet baby";
    }
    else cout << "Boris, you are punished!";
    return 0;
}