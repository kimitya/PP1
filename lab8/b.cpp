#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main () {
    vector <int> v;
    vector <int> :: iterator it;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (it=v.end()-1; it>=v.begin(); it--) {
        cout << *it << " ";
    }
    return 0;
}
