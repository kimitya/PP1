#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.size() > 10){
            if(s.substr(s.size() - 10) == "@gmail.com"){
                cout << s.substr(0, s.size() - 10) << endl;
            }
            // cout << s.substr(0, s.size() - 10) << endl;
        }
    }

    return 0;
}