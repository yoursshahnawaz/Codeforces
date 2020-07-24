#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	string str, bus[1001];
	for(int  i = 0; i < n; i++) {
		cin >> str;
		if((str[0] == 'O' && str[1] == 'O') && count == 0) {
			str[0] = '+';
			str[1] = '+';
			count = 1;
		}
		else if(str[3] == 'O' && str[4] == 'O' && count == 0) {
			str[3] = '+';
			str[4] = '+';
			count = 1;
		}
		bus[i] = str;
	}
	if(count == 1) {
		cout << "YES" << endl;
		for(int i = 0; i < n; i++) {
			cout << bus[i] << endl;
		}
	}
	else {
		cout << "NO";
	}
}
