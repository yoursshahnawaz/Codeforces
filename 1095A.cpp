#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, space = 1;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < n; i += space) {
		cout << str[i];
		space++;
	}
}
