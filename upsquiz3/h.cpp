#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>

using namespace std;

double GetPriceQualityRatio(int price, int quality) {
    double x = (double)price / (double)quality;
    return x;

}

int main(){
    int n;
    cin >> n;
    double cool = INT_MAX;
    string b = "";
    while (n--) {
        string s;
        double p, q;
        cin >> s >> p >> q;
        if (GetPriceQualityRatio(p,q)<cool) {
            b = s;
            cool = GetPriceQualityRatio(p,q);
        }
    }
    cout << b;

    return 0;
}