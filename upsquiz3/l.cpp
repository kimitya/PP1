#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

string nextLetter (string s) {
    string t = "";
    for (int i=0; i<s.size(); i++) {
        if ((int(s[i])>='a' && int(s[i])<='z') || (int(s[i])>='A' && int(s[i])<='Z')){
            if (s[i]=='z') {
                t += 'a';
            }
            else if (s[i]=='Z') {
                t+= 'A';
            }
            else t+= char(int(s[i])+1);
        }
        else t+=s[i];
    }
    return t;
}

int main(){
    string s;
    getline(cin,s);
    cout << nextLetter (s);
    return 0;
}