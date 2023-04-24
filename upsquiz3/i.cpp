#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

int main(){
    string a, b;
    char c;
    cin >> a >> b >> c;
    for (int i=0; i<a.size(); i++){
        for (int j=0; j<b.size(); j++){
            if (a[i]==b[j]) {
                a[i]=c;
            }
        }
    }
    cout << a;

    return 0;
}