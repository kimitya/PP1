#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

bool karenloh(string s){
    string t = "";
    for (int i=s.size()-1; i>=0; i--){
        t += s[i];
    }
    if (t==s) return true;
    else return false;
}

bool f (string s) {
    char c = s[0];
    bool g = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i]==c){
            g=1;
        } else {
            g=0;
            break;
        }
    }
    return g;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();

    if (f(s)){
        cout << 0;
        return 0;
    }

    while (n--) {
        if (karenloh(s)){
            s.pop_back();
        } else {
            cout << s.size();
            return 0;
        }

    }


    return 0;
}