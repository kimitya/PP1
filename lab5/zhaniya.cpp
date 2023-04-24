#include <iostream>
using namespace std;

int main (){
    string s, t;
    cin >> s >> t;
    int pos = 0;

    if (s.find(t, pos) >= 0 && s.find(t, pos) < s.size()){
        cout << "YES";
    } else {
        cout << "NO";
    }
}