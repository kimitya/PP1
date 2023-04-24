#include <iostream>
using namespace std;

bool isValid(string s, int n) {
    int cnt =0;
    for (int i=0; i<s.size(); i++) {
        
    }
}
int main () {
    string s;
    int n, cnt=0;
    cin >> s >> n;
    if (isValid(s,n)){
        cout << "Valid" << endl;
    }else {
        cout << "Not valid" << endl;
    }
    // for (int i=0; i<s.size(); i++) {
    //     int j=i+1;
    //     while (j<s.size()) {
    //         if (s[i]>=48 && s[i]<=57 && s[j]>=48 && s[j]<=57) {
    //             cnt++;
    //         }
    //     }
    // }
    // if (cnt==n-1) {
        
    }
}