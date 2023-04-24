#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int even = 0;
    int odd = 0;
    
    for (int i; i<n; i++){
        int x;
        cin>>x;
        if (x%2==0) {
            even++;
        }
        else if (x%2!=0) {
            odd++;
        }
    }
    cout << even << " " << odd;
    return 0;
}
