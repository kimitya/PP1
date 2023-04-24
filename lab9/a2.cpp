#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    multimap <int,int> m;

    while (n--) {
        int x, y;
        cin >> x >> y;
        m.insert(make_pair(x,y));
    }

    multimap <int,int> :: iterator it;



    for (it=m.begin(); it!=m.end(); it++) {
        cout << (*it)
    }
    

    return 0;
}