#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int a1=a/1000;
    int a4=a%10;
    int a3=(a/10)%10;
    int a2=(a/100)%10;
    //cout << a1 << endl;
    //cout << a2 << endl;
    //cout << a3 << endl;
    //cout << a4 << endl;
    if (a1==a4 && a2==a3) {
        cout << "YES";
    }
    else cout << "NO";

    return 0; 
}