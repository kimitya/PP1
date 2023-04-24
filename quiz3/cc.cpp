
#include <iostream>
#include <vector>
using namespace std;

bool isTruth(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string s; 
    getline(cin, s);
    string tmp = "";
    vector <string> v;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            if(isTruth(tmp)) {
                v.push_back(tmp);
            }
            tmp = "";
        } else {
            tmp += s[i];
        }
    }
    if(tmp.size() != 0) {
        if(isTruth(tmp)) {
            v.push_back(tmp);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}