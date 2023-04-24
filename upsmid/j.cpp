#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i=0; i<s.size(); i++) {
        if (int(s[i]-'0')>mx){
            mx=int(s[i]-'0');
        }
        if (int(s[i]-'0')<mn){
            mn=int(s[i]-'0');
        }
    }
    cout << mx << " " << mn;
    return 0;
}