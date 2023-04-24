#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int cnt1=0, cnt2=0;

    for (int i=0; i<s.size(); i++) {
        if (i%2==0) {
            cnt2+=int(s[i]);
        }
        else if (i%2!=0 || i==1) {
            cnt1+=int(s[i]);
        }
    }
    if (cnt1==cnt2) {
        cout << "YES";
    }
    else cout << "NO";
    
    return 0;
}