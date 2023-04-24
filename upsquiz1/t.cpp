#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    for (int i =0; i<n; i++) {
        int a;
        int sum=0;
        while (cin>>a) {
            sum += a;
        }
        if (sum%2==0) {
            cout << "Sum of digits is even!";
        }
        if (sum%2!=0) {
            cout << "Sum of digits is odd!";
        }
        sum = 0;
    }
}