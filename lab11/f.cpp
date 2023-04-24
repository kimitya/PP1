#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

vector <int> divisors (int a, int b){
    vector <int> v;
    for (int i=0; i<=min(a,b); i++){
        if (a%i==0 && b%i==0) {
            v.push_back(i);
        }
    }
    return v;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector <int> d = divisors(a,b);
    // for (int i=0; i<d.size(); i++){
    //     cout << d[i] << " ";
    // }
    // cout << endl;
    if(d.size() >= c){
        cout << d[d.size()-c];
    }
    return 0;
}