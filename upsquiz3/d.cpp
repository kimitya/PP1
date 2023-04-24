#include <iostream>
using namespace std;

string h;
string s;

void dectohec (int n) {
    if (n==0) return;
    int o = n%16;
    h+=s[o];
    dectohec(n/16);
}
int main(){
    int n;
    cin >> n;
    h="";
    s="0123456789ABCDEF";
    dectohec (n);
    for (int i=h.size()-1; i>=0; i--){
        cout << h[i];
    }
    return 0;
}
