#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int sum = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i =0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum += arr[i][j];
        }
        cout << "The sum of row number " << i+1 << " is " << sum << endl;
        sum=0;
    }

    for (int j=0; j<m; j++) {
        for (int i=0; i<n; i++) {
            sum += arr[i][j];
        }
        cout << "The sum of column number " << j+1 << " is " << sum << endl;
        sum=0;
    }
    return 0;
}