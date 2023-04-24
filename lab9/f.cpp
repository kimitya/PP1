#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt1=0;
    int cnt2=0;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='('){
            cnt1++;
        }else {
            cnt2++;
        }
    }
    if (cnt1==cnt2){
        if(s[s.size()-1]!='('){
            cout << "YES";
            return 0;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
