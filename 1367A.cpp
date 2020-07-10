#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	string str;
	while(t--) {
		cin >> str;
		cout << str[0];
		for(int i = 1; i < str.length(); i += 2) {
			cout << str[i];
		}
		cout << endl;
	}
}
