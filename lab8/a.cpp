#include <iostream>
#include <set>
#include <iterator>
using namespace std;


int main(){
    set<int> s;
    set<int> :: iterator it;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(it = s.begin();it != s.end();it++){
        cout << *it << " ";
    }
    return 0;
}
