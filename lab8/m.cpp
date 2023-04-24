#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
#include <iterator>
using namespace std;

set <int> :: iterator it;
int fullsum (set <int> v) {
    int sum =0;
    for (it=v.begin(); it!=v.end(); it++){
        sum += *it;
    }
    return sum;
}
int main (){
    int n;
    cin >> n;
    set <int> v;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.insert(x);
    }
    cout << fullsum(v);
    return 0;
}