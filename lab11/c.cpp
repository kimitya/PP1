#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

bool comp (pair <string,double> &a, pair <string, double> &b){
    if (a.second == b.second) {
        return a.first>b.first;
    }
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;
    int cnt=0;
    map <string, double> m;
    map <string, double> :: iterator it;
    for (int i=0; i<n; i++){
        string s;
        double x;
        cin >> s >> x;
        m[s] += x;
        cnt +=x;
    }
    vector < pair < string,double> > k;
    for (it = m.begin(); it!= m.end(); it++){
        k.push_back(make_pair ((*it).first, ((*it).second*100)/cnt));
    }
    sort (k.begin(), k.end(), comp);

    for (int i=0; i<k.size(); i++){
        cout << k[i].first << " " << k[i].second << "%" << endl; 
    }
    return 0;
}