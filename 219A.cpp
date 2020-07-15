#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, n, count = 0;
	cin >> k;
	string str;
	char ch;
	cin >> str;
	n = str.size();
	sort(str.begin(), str.begin()+n);
	for(int i = 0; i < n; i++) {
		if(i % k == 0)
			ch = str[i];
		if(str[i] == ch)
			count++;
	}
	if(n == count && count % k == 0) {
		for(int i = 0; i < k; i++) {
			for(int j = 0; j < n; j += k) {
				cout << str[j];
			}
		}
	}
	else {
		cout << -1;
	}

}
