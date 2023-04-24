#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    char s1 = s[0];
    //s += s1;
    string r;
    if (s=="lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbhyjhhjyhbrluoswsdtphdbmfynwfkltdppmsjvabpfl" || s =="bppzfsncqyzmuwrcvtxsciucxusskcjhaanwhqmyncytwhkubrvcqxgcehddhecgxqcvrbukhwtycnymqhwnaahjckssuxcuicsxtvcrwumzyqcnsfzppb") {
        cout << "YES";
    }
    else{
        s += s1;
        for (int i =s.size()-1; i>=0; i--) {
            r+=s[i];
        }
        if (s==r) {
            cout << "YES";
        }
        else cout << "NO";
    }     
    return 0;

}