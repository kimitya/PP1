#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int sumInString (string s){
    int sum = 0;
    for (int i=0; i<s.size(); i++) {
        if (int (s[i])>='0'  && int(s[i]) <= '9') {
            sum += int(s[i]) - '0';
        }
    }
    return sum;
}

int main(){
    string s;
    cin >> s;

    cout << sumInString(s);

    return 0;
}