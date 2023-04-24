#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <set>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    set < int> s;
    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    if (v.size()==s.size()){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}