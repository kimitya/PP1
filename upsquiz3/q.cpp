#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

bool gmail (string s) {
    if(s.find("@gmail.com")==s.size() - 10) {
        return true;
    }
    else return false;
}

string withoutgmail (string s) {
    int dotPosition = 0;
    dotPosition = s.find("@");
    s.erase(s.begin()+dotPosition, s.end());
    return s;
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
