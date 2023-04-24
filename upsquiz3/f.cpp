#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

string lowerBoundOnly (string s) {
    string t ="";
    for (int i=0; i<s.size(); i++) {
        if (int(s[i])>='a' && int(s[i])<='z') {
            t += s[i];
        }
    }
    return t;
}

int main(){
    string s;
    cin >> s;

    cout << lowerBoundOnly(s);

    return 0;
}