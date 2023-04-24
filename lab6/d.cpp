#include <iostream>
using namespace std;
bool book(int b, int c) {
    if (b==c) {
        return true;
    }
    else return false;
}
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i=0; i<n; i++) {
        if (book(a[i], x)) {
            cout << "Yes";
            return 0;
        }   
    }
    cout << "No";
    return 0;
}