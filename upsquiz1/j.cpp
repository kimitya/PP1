#include <iostream>
using namespace std;
int main () {
    int a, b, c, costa, costb, costc, cost, have;
    cin >> a >> b >> c >> costa >> costb >> costc >> have;
    cost = a*costa + b*costb + c*costc;
    if (have>=cost) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}