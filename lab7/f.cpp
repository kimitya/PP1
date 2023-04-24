#include <iostream>
using namespace std;

int evenDigit (string s, int cnt, int i) {
    if (i==s.size()) return cnt;

    if (s[i]%2==0) {
        return evenDigit (s, cnt+1, i+1);
    }
    return evenDigit (s, cnt, i+1);


}
int main () {
    string s;
    cin >> s;
    cout << evenDigit(s, 0, 0);
}