#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int sumeven=0, sumodd=0, cnteven=0, cntodd=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]%2==0) {
            sumeven += a[i];
            cnteven++;
        }
        else if (a[i]%2!=0) {
            sumodd += a[i];
            cntodd++;
        }
    }
    cout << "Left hand magic power: " << sumeven*cnteven << endl;
    cout << "Right hand magic power: " << sumodd*cntodd;
    return 0;

}