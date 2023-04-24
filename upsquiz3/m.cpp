#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int sumAscii(string s) {
    int sum=0;
    for (int i=0; i<s.size();i++){
        sum += int(s[i]);
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    if (sumAscii(s)>300) {
        cout << "It is tasty!";
    } else cout << "Oh, no!";

    return 0;
}