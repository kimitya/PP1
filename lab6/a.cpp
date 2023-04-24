#include <iostream>
using namespace std;

void coutSum(int a, int b) {
    cout << a+b;
}
int main() {
    int a, b;
    cin >> a >> b;
    coutSum(a, b);
    return 0;
}