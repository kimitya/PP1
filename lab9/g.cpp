#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    string s;
    cin >> s;
    map <char,int> m;
    for (int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    map <char,int> :: iterator it;
    bool one=0;
    for (it=m.begin(); it!=m.end(); it++) {
        if ((*it).first=='0'){
            for (int j=0; j<(*it).second; j++){
                cout << '0';
            }
        }
        if (one==0 && (*it).first=='1'){
            cout << "1";
            one=1;
        }
    }
    return 0;
}