#include <iostream>
using namespace std;
void dopus (string s, int n) {
    int cnt =0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]>=48 && s[i]<=57) {
            cnt++;
        }
    }
    if (cnt>=n) {
        cout << "YES";
    }
    else cout << "NO";
}

int main () {
    string s;
    int n;
    cin >> s >> n;
    dopus(s, n);
    return 0;
}