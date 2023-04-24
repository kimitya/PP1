#include <iostream>
using namespace std;

bool valid(int l) {
    if (l%2!=0) {
        return false;
    }
    else return true;
}
int main () {
    int n, l;
    cin >> n;
    while (n!=0){
        l=n%10;
        if (valid(l)==false) {
            cout << "Not valid";
            return 0;
        }
        else n=n/10;
    }
    if (valid(l)==true) {
        cout << "Valid";
    }
    return 0;
}
