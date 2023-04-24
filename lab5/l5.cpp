#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (i==s.size()-1) {
            break;
        }
        if (int (s[i]) > int (s[i+1])) {     
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}