#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float a, b;
    cin >> a >> b;
    int cnt=0;
    for (int i = -60; i<=60; i++){
        if(a*pow(2,i)==b){
            cout << "YES " << i;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
