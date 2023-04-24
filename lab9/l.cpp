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
    vector < pair <int,int > > v;
    vector < pair <int,int > > sumv;
    int i = 1;

    while(n--) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a+b, i));
        i++;
    }
    sort (v.begin(), v.end());

    for (int k=0; k<v.size(); k++){
        cout << v[k].second << " ";
    }

    return 0;
}