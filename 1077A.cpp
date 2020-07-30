#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	long long a, b, k;
	cin >> t;
	while(t--) {
		cin >> a >> b >> k;
		long long ans = 0;
		ans = (a - b) * floor(k / 2);
		if(k % 2)
			ans += a;
		cout << ans << endl;
	}
}
