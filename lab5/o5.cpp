#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int mx=0;
    char c;
    for (int i = 0; i<s.size(); i++) {
        if (int (s[i]) >mx) {
            mx=int (s[i]);
            c=s[i];
        }
    }
    cout << c;
    return 0;
}