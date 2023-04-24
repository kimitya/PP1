#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int o=0;
    while (n!=0) {
        if (o%7==0) {
        }
        else if (o%2!=0) {
            n=n+3;
        }
        else if (o%2==0) {
            n=n-4;
        }
        o++;
    }
    cout << o;
}