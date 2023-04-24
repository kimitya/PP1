#include <iostream>
using namespace std;
int sumVal(int n) {
    int l, sum=0;
    while (n!=0) {
        l=n%10;
        sum +=l;
        n=n/10;
    }
    return sum;
}
int main () {
    int n;
    cin >> n;
    cout << sumVal(n);
}