#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

void toBinary(int x){
    string s;
    while (x!=0){
        int k=x%2;
        s += char(k+48);
        x /= 2;
    }
    reverse (s.begin(), s.end());
    cout << s << endl;
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), toBinary);

    // for (int i=0; i<n; i++){
    //     cout << v[i] << endl;
    // }

    return 0;
}