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
    vector <int> v;
    for (int i=0; i<a; i++){
        int x; 
        cin >> x;
        v.push_back(x);
    }
    rotate (v.begin(), v.begin()+b, v.end());
    reverse (v.begin(), v.end());

    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}