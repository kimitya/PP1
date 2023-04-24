#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    string a [] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string b;
    cin >> b;
    if (b=="SUN"){
        cout << 7;
        return 0;
    }
    for (int i=0; i<7; i++){
        if (b==a[i]){
            cout << 7-i-1;
            return 0;
        }
    }

    return 0;
}