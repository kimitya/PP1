#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    if (n%2!=0){
        cout << "Super";
    } 
    else {
        if (n>2 && n<5)  {
            cout << "Not Super";
        } 
        else if (n<20 && n>6){
            cout << "Super";
        } 
        else if (n>20) {
            cout << "Not Super";
        }
    }

    return 0;
}