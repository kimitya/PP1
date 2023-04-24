#include <iostream>
using namespace std;
int main () {
    string s1;
    string s2;
    cin >> s1 >> s2;
    int cnt1 = 0;
    int cnt2=0;

    for (int i=0; i<s1.size(); i++ ) {
        cnt1+=int(s1[i]);
    }
    for (int i=0; i<s2.size(); i++) {
        cnt2+=int(s2[i]);
    }

    if (cnt1==cnt2) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;

}