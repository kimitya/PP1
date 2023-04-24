#include <iostream>
using namespace std;
int main () {
    string s;
    string t;
    cin >> s >> t;
    string s1 = s;
    for (int i=s.size(); i<=t.size(); i=i+s.size()) {
        // cout << s << endl;
        if (s1==t) {
            cout << "YES";
            return 0;
        }
        s1+=s;
    }
    cout << "NO";
    return 0;
}