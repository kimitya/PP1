#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cin >> n;

    vector <int> v;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int a, b;
    cin >> a >> b;


    v.erase(v.begin()+a, v.begin()+b+1);
    //cout << v.size();

    //cout << v[a] << " " << v[b];

    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}