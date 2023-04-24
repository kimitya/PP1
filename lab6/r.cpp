#include <iostream>
using namespace std;
char toUpper(char a) {
    if (int(a)>=97 && int(a)<=122) {
        return char (int(a)-32);
    }
    else return a;
}
int main () {
    char a;
    cin >> a;
    cout << toUpper(a);
    return 0;
}