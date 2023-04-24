#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int f(string s) {
    int sum =0;
    for (int i=0; i<s.size(); i++){
        sum += (int(s[i])-'0')* pow(2, i);
        //cout << sum << endl;
    }
    return sum;
}

int main(){
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    cout << f(n);
    return 0;
}