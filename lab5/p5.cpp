#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (int (s[i]) == 122) {
            cout << char (97);
        }
        else cout << char (int (s[i])+1);
    }
    return 0;
}