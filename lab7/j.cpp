#include <iostream>
using namespace std;

int heaterAlmat (string s, int i, int sum) {
    sum = (int(s[i])-48)/2; 
    if (i==s.size()-1) return sum;
    else return sum+ heaterAlmat(s, i+1, sum);
}
int main () {
    string s;
    cin >> s;
    cout << heaterAlmat (s, 0, 0);
}