#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue <string> st;
    while (n--) {
        int x;
        cin >> x;
        string s;
        if (x==1) {
            cin >> s;
            st.push(s);
        }
        else if(x==2){
            st.pop();
        }
        if (!st.empty()) {
            cout << st.front() << endl;
        }
        else {
            cout << "queue is empty" << endl;
        }
    }
    return 0;
}