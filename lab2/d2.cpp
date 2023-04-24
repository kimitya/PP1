#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n, k;
    cin >> n >> k;
    // int time, time1;
    if (k>=n) {
        cout<<2;
    }
    else {
        // time1=(2*n)/k;
        // time=ceil(time1);
        cout<<ceil(n*2/k);
    }
     
    

    // cout << time;
    return 0;
}