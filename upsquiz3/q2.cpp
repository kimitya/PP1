#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

bool gmail (string s) {
    string t = "";
    for (int i=s.size()-1; i>=s.size()-9-1; i--) {
        t += s[i];
    }
    reverse (t.begin(), t.end());
    //cout << t;
    if (t=="@gmail.com") {
        return true;
    } else return false;
}

string withoutgmail (string s) {
    string h = "";
    for (int i=s.size()-9; i<s.size(); i++) {
        h += s[i];
    }

    return h;
}

int main(){
    int n;
    cin >> n;
    vector <string> v;
    while(n--) {
        string s;
        cin >> s;
        if (gmail(s)){    
            v.push_back(withoutgmail(s));
        }
    }

    for (int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}