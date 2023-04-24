#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void coutt (vector <int> v){
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main () {
    int n;
    cin >> n;

    vector <int> v;
    vector <int> smallnum;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin>>k;

    
    int mn=INT_MAX;
    int mnindex;
    for (int i=0; i<k; i++){
        for (int j=0; j<v.size(); j++){
            if (v[j]<mn){
                mn=v[j];
                mnindex=j;
            }
        }
        v.erase(v.begin()+mnindex);
        smallnum.push_back(mn);
        mn=INT_MAX;
    }
    coutt (smallnum);
    return 0;
}