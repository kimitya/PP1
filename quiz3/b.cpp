#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
bool isTruth(string l){
    for (int i=0; i<l.size(); i++) {
        if (l[i]>=48 && l[i]<=57) {
            return false;
        }
    }
    return true;
}
int main () {
    string s;
    getline(cin, s);
    // int cntp =0;
    // for (int i=0; i<s.size(); i++) {
    //     if (s[i]==' '){
    //         cntp++;
    //     }
    // }
    // cntp++;
    string k ="";

    for (int i=0; i<s.size(); i++) {
        if (s[i]==' ' || s[i]=='\n') {
            if (isTruth(k)) {
                cout << k << endl;
            
            }
            k="";

        }
        else k += s[i];
    }
    if(isTruth(k)) {
        cout << k << endl;
    }

    return 0;
}