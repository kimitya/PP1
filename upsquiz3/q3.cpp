#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        reverse(s);
        if(s.substr(0, 9) == reverse("@gmail.com")){
        cout << s << endl;
    }
}

    return 0;
}