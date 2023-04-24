#include <iostream>
using namespace std;

void propis(string s) {
    for (int i =0; i<s.size(); i++) {
        if (i%2==0) {
            if (int (s[i])>=97 && int (s[i])<=122) {
                cout << char(int(s[i])-32);
            }
            else cout << s[i];
        }
        else cout << s[i];
    }
}

int main () {
    string s;
    cin >> s;
    propis(s);
    return 0;
}
    