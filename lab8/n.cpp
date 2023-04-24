#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
#include <iterator>

using namespace std;


void coutt (set <int> v){
    set <int> :: iterator it;
    for (it=v.begin(); it!=v.end(); it++) {
        cout << *it<< " ";
    }
}

set <int> oddSet (set <int> v) {
    set <int> :: iterator it;
    for (it=v.begin(); it!=v.end(); it++){
        if (*it%2==0){
            v.erase(it);
        }
    }
    return v;    
}



int main (){
    int n;
    cin >> n;
    set <int> v;
    set <int> :: iterator it;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.insert(x);
    }
    
    for (it=v.begin(); it!=v.end(); it++){
        // if (*it%2!=0){
        //     v.erase(2);
        // }
        cout << *it << ' ';
        
    }

    for (it=v.begin(); it!=v.end(); it++){
        if(*it%2 == 0)
            v.erase(it);
    }
    cout << endl;
    for (it=v.begin(); it!=v.end(); it++){
        // if (*it%2!=0){
        //     v.erase(2);
        // }
        cout << *it << ' ';
        
    }
    
    //set <int> k = oddSet(v);
    //coutt (v);  
    return 0;
}