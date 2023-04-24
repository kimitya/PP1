#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int cnta=0;
    int cntb=0;
    for(int i =0; i<s.size(); i++) {
        if (int (s[i])>=65 && int (s[i]<=90)) {
            cnta++;

        }
        if (int (s[i])>=97 && int (s[i]<=122)) {
            cntb++;

        }
    }
    cout << cntb << " " << cnta;
    return 0;
}