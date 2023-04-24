#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int firstOccur (string s, char c) {
    int mn = INT_MAX;
    for (int i=0; i<s.size(); i++) {
        if (s[i]==c && i<=mn) {
            mn = i;
        }
    }
    return mn;
}

int lastOccur (string s, char c) {
    int mx = INT_MIN;
    for (int i=0; i<s.size(); i++) {
        if (s[i]==c && i>=mx) {
            mx = i;
        }
    }
    return mx;
}



int main(){
    string s;
    cin >> s;
    char c;
    cin >> c;

    if (firstOccur(s,c) != lastOccur(s,c)) {
        cout << firstOccur(s,c) << " " << lastOccur(s,c);
    }
    else cout << firstOccur(s,c);

    return 0;
}