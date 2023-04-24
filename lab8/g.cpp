#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime (int b){
    for (int i = 2; i<sqrt(b)+1; i++){
        if (b%i==0) {
            return false;
        }
    }
    return true;
}
int main () {
    int n;
    cin >> n;

    vector <int> v;

    int cnt=0;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int a;
    cin >> a;

    for (int i=0; i<n; i++) {
        if (v[i]>=a && isPrime(v[i])){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}