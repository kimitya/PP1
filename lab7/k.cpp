#include <iostream>
using namespace std;

int recMax(string s, int i, int mx){
    if(i == s.size()) return mx; // condition of quit
    if(s[i] - '0' > mx){
        mx = s[i] - '0';
    }
    return recMax(s, i+1, mx);
}

int main(){
    string s;
    cin >> s;
    cout << recMax(s, 0, -1);
    return 0;
}
