#include <iostream>
#include <limits.h>
using namespace std;
int main () {
    float x , y;
    cin >> x;
    cin >> y;
    float x1;
    int d =1;
    if (x==y) {
        cout << d;
        return 0;
    }

    while (x<y) {
        x1=(x/10)+x;
        x=x1;
        d++;
        if (x>=y) {
            cout << d;
            return 0;
        }
    }
    return 0;
}