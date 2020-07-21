#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	char color;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> color;
			if(color == 'C' || color == 'M' || color == 'Y') {
				cout << "#Color" << endl;
				return 0;
			}
		}
	}
	cout << "#Black&White";
}
