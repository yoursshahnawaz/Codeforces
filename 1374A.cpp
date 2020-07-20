#include<bits/stdc++.h>
using namespace std;
int main() {
	long t, x, y, n, k;
	cin >> t;
	while(t--) {
		cin >> x >> y >> n;
		k = n - (n % x) + y;
		k -= (k > n) * x;
		cout << k << endl;
	}
}
