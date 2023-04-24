#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline (cin,s);
    map <char,int> m;
    for (int i=0; i<s.size(); i++) {
        m[s[i]]++;
    }
    int n;
    cin >> n;
    char arr [n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort (arr, arr+n);

    for (int i=0; i<n; i++){
        cout << arr[i] << " - " << m[arr[i]] << endl;
    }
    

    return 0;
}