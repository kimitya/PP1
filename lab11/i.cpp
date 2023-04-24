#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

bool palidromeString(string s){
    string t = s;
    reverse (t.begin(), t.end());
    if (s==t){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        //cout << s << endl;
        if (palidromeString(s)){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));

    cout << "JOJO";


    return 0;
}