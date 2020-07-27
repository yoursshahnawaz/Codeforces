#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long a, b, c, sum;
	while(t--) {
		sum = 0;
		cin >> a >> b >> c;
		sum = floor(a + b + c) / 2;
		cout << sum << endl;
	}
}
