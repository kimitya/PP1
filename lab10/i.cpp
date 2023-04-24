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
    vector <int> v;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector <int> o = v;
    reverse(v.begin(), v.end());

    for (int i=0; i<n; i++){
        if (v[i]!=o[i]){
            cout << "Instead of " << o[i] << " here was " << v[i] << endl;
        }
        else cout << "OK" << endl;
    }



    return 0;
}