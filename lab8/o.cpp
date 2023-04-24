#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
#include <iterator>

using namespace std;

string toLower(string s){
    for (int i=0; i<s.size(); i++) {
        if (int (s[i])>=65 &&int (s[i])<=90){
            s[i]=char(int (s[i])+32);
        }
    }
    return s;
}

int main () {
    string t, s;
    cin >> t;
    set <char> v;
    set <char> :: iterator it;
    s = toLower(t);
    for (int i=0; i<s.size(); i++){
        v.insert(s[i]);
    }
    cout << v.size() << endl;
    for (it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}