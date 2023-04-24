#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    string w = "";
    for (int i = s.size()-1; i>=0; i--) {
        w+=s[i];
    }
    if (w==s) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;

}