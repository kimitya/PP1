#include <iostream> 
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    int l, s;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        l=i-1;
        s=i+1;
        if (arr[i]==arr[l]) {
            arr[i]=arr[s];
            n--;
        }
        cout << arr [i] << " ";
    }
}