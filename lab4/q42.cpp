#include <iostream>
using namespace std;
int main() {
    int n, d, s;
    cin >> n;
    d = n - 1;
    s = 1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<d; j++){
            cout << '.';
        }
        for(int j=0; j<s; j++){
            cout << '*';
        }
        for(int j=0; j<d; j++){
            cout << '.';
        }
        cout << endl;
        d -= 1;
        s += 2;
    }
    
    return 0;
}