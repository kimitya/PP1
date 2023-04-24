#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int x;
    for(int i =0; i<s.size(); i++) {
        x=int (s[i]);
        if (x>=65 && x<=90) {
            cout<<char(x);

        }
        if (x>=97 && x<=122) {
            cout<<char(x-32);

        }
    }
    return 0;
}