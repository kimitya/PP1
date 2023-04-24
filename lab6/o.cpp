#include <iostream>
using namespace std;
int a, sum=0;

bool luckyTicket(int n, int l) {
    while (n!=0) {
        a=n%10;
        sum += a;
        n = n/10;
    }
    if (sum%l==0) {
        return true;
    }
    else return false;
}
int main () {
    int n;
    cin >> n;
    int l = n%10;
    // while (n!=0) {
    //     a=n%10;
    //     sum += a;
    //     n = n/10;
    // }
    if (luckyTicket(n, l)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;

}