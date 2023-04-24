#include <iostream>

using namespace std;
int main () {
    int size, s;
    s=0;
    cin >> size;
    int a[size];
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    for (int i=0; i<size; i++) {
        if (a[i]>0) {
            s++;
        }
        }
    cout << s;
    
    return 0;
}