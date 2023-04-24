#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string,int> m;
    while(n--){
        string s;
        cin >> s;
        if (m[s]>0){
            cout << "user already exists" << endl;
        }
        else {
            cout << "new user added" << endl;
            m[s]++;
        }
    }
    

    return 0;
}