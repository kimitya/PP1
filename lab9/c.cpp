#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;

    map <int,int> m;
    while (n--) {
        int x;
        cin >> x;
        m[x] += 1;
    }
    map <int,int> :: iterator it;

    int cnt=0;

    for (it=m.begin(); it!=m.end(); it++) {
        if ((*it).second > 1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}