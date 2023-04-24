#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> m;
    while(n--){
        string s;
        int x;
        cin >> s >> x;
        m[s] += x;
    }
    //sort(m.begin(), m.end());

    map <string,int> :: iterator it;

    for (it=m.begin(); it!=m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}