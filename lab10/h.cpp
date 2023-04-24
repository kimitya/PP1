#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

bool f(vector <int> v){
    bool k = 0;
    for (int i = 1; i<v.size(); i++){
        if (v[i]==v[0]){
            k=1;
        }
        else k=0;
    }
    return k;
}

void printt(vector <int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    if (f(v)) {
        cout << v[0];
        return 0;
    }
    do{
        printt (v);
    }while(next_permutation(v.begin(), v.end()));

    return 0;
}