#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]){
                int x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for (int i=n-1; i>=0; i--) {
        cout << a[i] << " ";
    } 
    return 0;
} 

