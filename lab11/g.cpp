#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set <pair < string,int> > k;
    map <string, int> m;
    set <pair < string,int> > :: iterator it;
    map <string, int> :: iterator itm;
    for (int i=0; i<n; i++){
        string s;
        int x;
        cin >> s >> x;
        k.insert(make_pair(s,x));
    }
    // cout << "-------------" << endl;
    // for (it=k.begin(); it!= k.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // cout << "-------------" << endl;
    for (it=k.begin(); it!= k.end(); it++){
        m[(*it).first]++;
    }
    
    for (itm=m.begin(); itm!= m.end(); itm++) {
        if ((*itm).second >= 3) {
            cout << (*itm).first << " +1"<< endl;
        }else {
            cout << (*itm).first << " NO BONUS"<< endl;
        }
    }

    return 0;
}