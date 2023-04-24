#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
bool my_comp(pair<int,int> & a, pair<int, int> & b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main () {
    int n;
    cin >> n;
    vector < pair <int, int> > v;
    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end(), my_comp);
    vector < pair <int, int> > :: iterator it;

    for (it=v.begin(); it!=v.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}