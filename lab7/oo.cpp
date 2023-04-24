#include <iostream>
#include <vector>

using namespace std;

vector <char> v;

string l;

void toKinary(int n, int k){
    if (n==0) return;
    int m = n%k;
    v.push_back(l[m]);
    toKinary(n/k, k);
}

int main () {
    int n, k;
    cin >> n >> k;
    l ="0123456789ABCDEFGHIJKlMNOPQRSTUVWXYZ";
    toKinary(n, k);
    for (int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
}