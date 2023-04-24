#include <iostream>
#include <map>
#include <iterator>

using namespace std;
map <string, string> :: iterator it;

bool checkLogin (map <string, string> m, string h){
    for (it=m.begin(); it!=m.end(); it++){
        if (h==(*it).first) {
            return 1;
        }
    }
    return 0;
}

bool checkPass (map <string, string> m, string j){
    for (it=m.begin(); it!=m.end(); it++){
        if (j==(*it).second) {
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    map <string, string> m;
    while (n--){
        string s, t;
        cin >> s >> t;
        m[s]=t;
    }


    int l;
    cin >> l;
    while (l--){
        string h, j;
        cin >> h >> j;
        if (checkLogin(m,h)&&checkPass(m,j)){
            cout << "correct password" << endl;
        }
        else if (checkLogin(m,h)==0){
            cout << "login error" << endl;
        }
        else if (checkLogin(m,h) && checkPass(m,j)==0){
            cout << "password error" << endl;
        }
    }
    return 0;
}