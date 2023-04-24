#include <iostream>
using namespace std;
float percentGirls (float a, float b) {
    float x=(b*100)/a;
    return x;
}
int main () {
    float a, b;
    cin >> a >> b;
    cout << percentGirls (a,b);
    return 0;
}