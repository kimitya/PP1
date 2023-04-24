#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

string clearString(string s) {
    string t ="";
    for (int i=0; i<s.size(); i++) {
        if ((int(s[i])>='a' && int(s[i])<='z') || (int(s[i])>='A' && int(s[i])<='Z')){
            t += s[i];
        }
    }
    return t;
}

int main(){
    string s;
    cin >> s;
    cout << clearString(s);

    return 0;
}