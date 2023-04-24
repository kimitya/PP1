#include <iostream>
using namespace std;
void positive (int n) {
    if (n>=0) {
        cout << n;
    }
    else cout << n*(-1);
}
int main () {
    int n;
    cin >> n;
    positive(n);
    return 0;
}