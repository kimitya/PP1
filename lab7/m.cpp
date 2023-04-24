#include <iostream>
using namespace std;
int simpleRecursion(int n, int i) {
    cout << i << " ";
    if (i==n) return i;
    else return simpleRecursion (n, i+1);
}
int main () {
    int n;
    cin >> n;
    simpleRecursion(n, 1);
    return 0;

}