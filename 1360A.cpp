#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, a, b, width = 0, height = 0, side = 0;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		width = max(2 * b, a);
		height = max(2 * a, b);
		side = min(width, height);
		cout << pow(side, 2) << endl;
	}
}
