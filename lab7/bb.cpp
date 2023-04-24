#include <iostream>
#include <vector>
using namespace std;

vector <int> v;

void toBinary(int n){
    if (n==0) return;
    int k = n%2;
    v.push_back(k); 
    return toBinary (n/2); 
}
int main (){
    int n;
    cin >> n;
    toBinary(n);
    for (int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
}