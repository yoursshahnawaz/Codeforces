#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m, ans = 0;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		ans = floor((n * m + 1) / 2);
		cout << ans << endl;
	}
}
