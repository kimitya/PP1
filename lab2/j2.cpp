#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int b =0;
    for (int i=0; i < n; i++) {
        int s;
        cin >> s;
        while (s>1){
            if (s%10!=0) {
                s=s/10;
            }
            else if (s%10==0) {
                b++;
                s=s/10;
            }
        }

        
    }
    cout << b ;
    

    return 0;
}