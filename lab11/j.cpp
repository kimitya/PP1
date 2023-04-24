#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;
int x, y;
bool closestPoint(pair <int,int> &a, pair <int,int> &b){
    double p1=sqrt(pow(a.first-x,2)+ pow(a.second-y,2));
    double p2=sqrt(pow(b.first-x,2)+ pow(b.second-y,2));
    return (p1<p2);
}


int main(){

    cin >> x >> y;
    int n;
    cin >> n;
    vector <pair <int,int> > v;
    vector <pair <int,int> > :: iterator it;
    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end(), closestPoint);

    for (it=v.begin(); it!=v.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}