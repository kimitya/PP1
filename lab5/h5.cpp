#include <iostream>
#include <string>
using namespace std;
int main () {
    bool g = true;
    string s;
    cin >> s;
    int cnt[10];
    for (int i=0; i<10; i++) {
        cnt[i]=0;
    }
    for (int i=0; i<s.size(); i++) {
        cnt[s[i] - '0']++;
    }
    for (int i=0; i<s.size(); i++) {
            if (i+1<s.size()) {
                if (cnt[s[i]-'0']==cnt[s[i+1]-'0']) {
                    g=true;
                }
                else if (cnt[s[i]-'0']!=cnt[s[i+1]-'0']) {
                    g=false;
                    cout << "NO";
                    return 0;
                }
                //cout << g;
            }
    }
    if (g==true) {
        cout << "YES";
    }

    return 0;
}