#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    vector <int> x;
    vector <int> y;
    int o;
    for (int i=0; i<a; i++){
        cin >> o;
        x.push_back(o);
    }
    //cout << "Hello!";
    for (int i=0; i<b; i++){
        cin >> o;
        y.push_back(o);
    }
    
    vector <int>::iterator it;
    it = unique(x.begin(), x.end());
    //5 4 3 2 
    x.resize(distance(x.begin(), it));
    
    it = unique(y.begin(), y.end());
    y.resize(distance(y.begin(), it));
    
    vector <int> k;
    // for (int i=0; i<x.size()+y.size(); i++){

    // }
    int g =0;
    int h=0;

    for (int i=0; i<x.size()+y.size(); i++){
        if (i%2==0) {
            k.push_back(x[g]);
            g++;
        }
        else {
            k.push_back(y[h]);
            h++;
        }
    }

    it = unique(k.begin(), k.end());
    k.resize(distance(k.begin(), it));

    for (int i=0; i<k.size(); i++) {
        cout << k[i] << " ";
    }
    return 0;
}