#include <iostream>
#include <limits.h>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main () {
    int n;
    cin >> n;
    int a[n];
    int mx= INT_MIN;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int gcdd=0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++) {
            if(gcd(a[i], a[j])>gcdd){
                gcdd=gcd(a[i], a[j]);
            }
        }
    }
    cout << gcdd;
        
    
    return 0;
}