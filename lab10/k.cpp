#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;


bool prime (int a){
    if (a == 0 || a==1) return 0;
    for (int j=2; j<(a/2)+1; j++){
        if (a%j==0) {
            return 0;
        }
    }
    return 1;
    
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if (x<0) {
            x = -x;
        }
        v.push_back(x);
        
    }
    int k = count_if(v.begin(), v.end(), prime);
    cout << k;

    return 0;
}