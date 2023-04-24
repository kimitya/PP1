#include <iostream>
using namespace std;

bool palidr(string s, int i, bool t) {
    if (i==s.size()-1) return t;
    if (s[i]==s[s.size()-1-i]) {
        return palidr(s, i+1, t);
    }
    else return 0;
}
int main () {
    string s;
    cin >> s;
    if (palidr (s, 0, 1)){
        cout << "Yes";
    }
    else cout << "No";
    return 0;
    
}