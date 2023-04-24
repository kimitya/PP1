#include <iostream>
#include <cmath>
using namespace std;

int twoDeg(int n, int i, int power) {
    if (i==power) return n;
    else {
        return twoDeg(2*n, i+1, power);
    }
}

int main () {
    int power;
    cin >> power;
    cout << twoDeg(1, 0, power);
    return 0;
}

// int poww(int num, int power){
//     if(power==0) return num;
//     else return poww(num*2, power-1);
// }

// int main()
// {
//     int power;
//     cin >> power;
//     cout << poww(2,power-1);
//     return 0;
//}