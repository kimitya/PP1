#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> odd;
    vector <int> even;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x%2==0) {
            even.push_back(x);
        }else {
            odd.push_back(x);
        }
    }
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for (int i=0; i<even.size(); i++) {
        cout << even[i] << " ";
    }
    for (int i=0; i<odd.size(); i++) {
        cout << odd[i] << " ";
    }
    return 0;

    

    return 0;
}