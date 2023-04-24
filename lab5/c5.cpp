#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int x, j, y;
    for(int i =0; i<s.size(); i++) {
        j=s.size()-1;
        x=int(s[i]);
        y=int(s[j]);
        if (x!=y) {
            cout << "NO";
            return 0;
        }
        else if (x==y) {
            int x1 = int(s[i+1]);
            int y1 = int(s[j+1]);
            if (x1==y1) {
                cout << "YES";
                return 0;
            }

        }
    }
    return 0;
}