#include <iostream>

using namespace std;

int main () {
    /* int n;
    cin >> n;
    int vect[n];
    for(int i=0; i<n; i++){
        cin >> vect[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + vect[i];
    }
    cout << sum; */
    int n;
    cin >> n;
    int sum = 0;
    for (int i =1; i<=n; i++) {
        sum = sum+i;
    }
    cout << sum;
    return 0;
}
