#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 2; i < str.size(); i++) {
		if(str[i-2] == 'x' && str[i-1] == 'x' && str[i] == 'x') {
			count += 1;
		}
	}
	cout << count;
}
