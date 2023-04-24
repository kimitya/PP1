#include <iostream>
using namespace std;
int main () {
    int n, a, d;
    cin >> n >> a >> d;
    cout << a << " ";
    int sum = a;
    for (int i=1; i<n; i++) {
        a+=d;
        cout << a << " ";
        sum +=a;
    }
    cout << endl;
    cout << "sum: " << sum;
}