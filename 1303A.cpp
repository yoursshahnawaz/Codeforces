#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	string str;
	cin >> t;
	while(t--) {
		int count = 0;
		cin >> str;
		int l = -1, r = -1;
		for(int i = 0; i < str.size(); i++) {
			if(str[i] == '1') {
				l = i;
				break;
			}
		}
		r = l;
		for(int i = str.size(); i >= l; i--) {
			if(str[i] == '1') {
				r = i;
				break;
			}
		}
		for(int i = l; i < r; i++) {
			if(str[i] == '0') {
				count += 1;
			}
		}
		cout << count << endl;
	}
}
