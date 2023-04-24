#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    map <string, double> m;
    map <string, double> :: iterator it;
    int a;
    cin >> a;
    int cnt=0;
    for (int i=0; i<a; i++){
        int b;
        cin >> b;
        for (int j=0; j<b; j++){
            string s;
            double x;
            cin >> s >> x;
            m[s]+=x;
            cnt += x;
        }
    }
    for (it=m.begin(); it!=m.end(); it++){
        cout << (*it).first << " " << ((*it).second *100)/cnt << endl;
    }


    return 0;
}