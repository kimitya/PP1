#include <iostream>
using namespace std;
bool cheater (int a[], int n, int d, int i){
    if (i+1==n-1) return false;
    if (a[i+1]-a[i]<d) return true;
    else return cheater (a, n, d, i+1);
}
int main () {
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) { 
            if (a[i]>a[j]) {
                int z = a[i];
                a[i]=a[j];
                a[j]=z;
            }   
        }
    }
    // for (int i=0; i<n; i++) {
    //     cout << a[i] << " ";
    // }
    if (cheater (a, n, d, 0)) {
        cout << "cheater";
    } 
    else cout << "no";
    return 0;
}