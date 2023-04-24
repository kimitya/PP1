#include <iostream>
using namespace std;

int sumD(string s, int i) {
    int sum = 0;
    sum = int(s[i])-48;
    if (i==s.size()) return 0;
    else {
    return sum + sumD(s, i+1);
    }
}
int main () {
    string s; cin >> s;
    cout << sumD(s, 0);
    return 0;
}