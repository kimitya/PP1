#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void coutGip(int a, int b) {
    cout<< setprecision(4) << sqrt((a*a)+(b*b));
}
int main () {
    int a, b;
    cin >> a >> b;
    coutGip (a, b);
}