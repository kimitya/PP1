#include <iostream>
using namespace std;
int main () {
    int x,y,a,b, a1, b1;
    cin >> x;
    cin >> y;
    cin >> a;
    cin >> b;
    if (x<a) {
        cout << "No";
        return 0;
    }

    if (x>a || b>y) {
        a1=x-a; //остаток от больших худи
        b1=b-y; //количество людей, не хватившим 
        if (a1>=b1) {
            cout << "Yes";
        }
        else if (a1<b1) {
            cout << "No";
            return 0;
        }
    
    else cout << "Yes";
    }
    return 0;
}
