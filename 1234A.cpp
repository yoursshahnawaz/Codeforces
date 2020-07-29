#include<bits/stdc++.h>
using namespace std;
int main() {
	int q;
	long a, total, n;
	cin >> q;
	while(q--) {
		cin >> n;
		total = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			total += a;
		}
		cout << (total + n - 1) / n << endl;
	}
}
