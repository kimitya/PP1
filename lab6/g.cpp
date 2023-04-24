#include <iostream>
using namespace std;
void ubrGlas(char s){
    if (s=='a' || s=='e'|| s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U') {
        return;
    }
    else cout << s;
}

int main () {
    string s;
    getline(cin, s);
    for (int i=0; i<s.size(); i++) {
        ubrGlas(s[i]);    
    }
    return 0;
}