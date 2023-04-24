#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int divisors (int a, int b, int c){
    vector <int> v;
    int cnt = 0;
    for (int i=min(a,b); i> 0; i--){
        if (a%i==0 && b%i==0) {
            cnt++;
        }
        if(cnt == c) return i;
    }
    return 0;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    // vector <int> d = divisors(a,b);
    // for (int i=0; i<d.size(); i++){
    //     cout << d[i] << " ";
    // }
    // cout << endl;
    // if(d.size() >= c){
    //     cout << d[d.size()-c];
    // }
    cout << divisors(a, b, c);
    return 0;
}