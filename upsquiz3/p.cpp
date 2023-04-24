#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

string strToBool(string s) {
    // int cnt1=0;
    // int cnt0=0;
    // for (int i=0; i<s.size(); i++){
    //     if (s[i]=='1') {
    //         cnt1++;
    //     }
    //     else if (s[i]=='0') {
    //         cnt0++;
    //     }
    // }
    if (s=="1") return "true";
    else if (s=="0") return "false";
    else return s;

}

int main(){
    string s;
    cin >> s;
    cout << strToBool(s);
    return 0;
}