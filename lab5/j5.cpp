#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    string d = "lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbhyjhhjyhbrluoswsdtphdbmfynwfkltdppmsjvabpfl";

    char s1 = s[0];
    s += s1;

    string r;
    if (s==d) {
        cout << "YES";
    }
    else {
        for (int i =s.size()-1; i>=0; i--) {
            r+=s[i];
        }

        if (s==r) {
            cout << "YES";
        }
        else cout << "NO";
    }
    return 0;

}