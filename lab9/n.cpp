#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector <int> a;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int cnt=0;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            int c = a[i]^a[j];
            if (find(a.begin(), a.end(), c)!=a.end()) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}