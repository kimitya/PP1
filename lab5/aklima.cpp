#include <iostream>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	for (int i = 0; i <= s.size(); i++) {
		for (char j = 'a'; j <= 'z'; j++) {
			string tmp = "";
			for (int k = 0; k < i; k++) {
				tmp += s[k];
			}
			tmp += j;
			for (int k = i; k < s.size(); k++) {
				tmp += s[k];
			}
			bool can = true;
			for (int k = 0; k < tmp.size(); k++) {
				if (tmp[k] != tmp[tmp.size() - k - 1]) {
					can = false;
				}
			}
			if (can) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
 
	return 0;
}