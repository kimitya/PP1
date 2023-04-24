#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int smallestValue (vector <int> v) {
    int mn = INT_MAX;
    for (int i=0; i<v.size(); i++) {
        if (v[i]<mn){
            mn=v[i];
        }
    }
    return mn;
}
int largestValue (vector <int> v) {
    int mx = INT_MIN;
    for (int i=0; i<v.size(); i++) {
        if (v[i]>mx){
            mx=v[i];
        }
    }
    return mx;
}

int difference (int a, int b) {
    return a-b;
}
int main () {
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << difference(largestValue(v), smallestValue(v));
    return 0;

}