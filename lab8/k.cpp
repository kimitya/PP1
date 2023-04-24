#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
using namespace std;
int main (){
    int n;
    cin >> n;

    vector <int> v;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    int mx=INT_MIN;
    int mxin;
    int sum=0;

    for (int i=0; i<k; i++) {
        for (int j=0; j<v.size(); j++) {
            if (v[j]>mx) {
                mx = v[j];
                mxin = j;
            }
        }
        sum += mx;
        v.erase(v.begin()+mxin);
        mx=INT_MIN;
    }
    cout << sum;
    return 0;
}