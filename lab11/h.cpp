#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

void shiftstring3 (string s, int key) {
    key %= 26;
    for (int i=0; i<s.size(); i++) {
        if(s[i]+key >90) {
            s[i]=s[i]+ key%26 - 26;
        }
        else s[i] = s[i] + key;
    }
    cout << s << endl;
}
int main () {
    int key; cin >> key;
    string s;
    cin >> s;
    shiftstring3 (s, key);
    return 0;
}