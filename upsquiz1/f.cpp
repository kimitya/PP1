#include <iostream>
using namespace std;

int main() {
int x1, y1, x2, y2, x3, y3;

cin >> x1 >> y1 >> x2 >> y2>> x3 >> y3;

if ((x1<=x2 && x1<=x3 && x3<=x2)||(x1>=x2 && x1>=x3 && x3>=x2)&&(y1<=y2 && y1<=y3 && y3<=y2) || (y1>=y2 && y1>=y3 && y3>=y2)) {
     cout << "yes";
}
else {
    cout << "no";
}
return 0; 
}