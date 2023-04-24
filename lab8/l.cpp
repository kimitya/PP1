#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
using namespace std;
int main (){
    int n;
    cin >> n;
    set <int> v;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.insert(x);
    }
    cout << v.size();
}
