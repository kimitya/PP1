#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    string s = "";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s += to_string(x);
    }
    string t ="";
    for (int i=0; i<s.size(); i++) {
        if (s[i]!='0') {
            t += s[i];
        }
    }
    string tt ="";
    for (int i = t.size()-1; i>=0; i--) {
        tt += t[i];
    }
    if (tt!=t) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}