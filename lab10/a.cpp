#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

vector < pair <string,int> > :: iterator it;

bool markssort(pair<string,int> & a, pair<string,int> & b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
    }
    

}

int main(){
    int n;
    cin >> n;
    vector < string> name;
    vector <int> marks;

    for (int i=0; i<n; i++){
        string s;
        int x;
        cin >> s >> x;
        name.push_back(s);
        marks.push_back(x);

    }
    sort(name.begin(), name.end());
    sort(marks.begin(), marks.end());

    for (int i=0; i<n; i++) {
        cout << name[i] << " " << marks[i] << endl;
    }


    return 0;
}