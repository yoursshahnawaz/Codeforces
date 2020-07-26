#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	int rem;
	while((rem = a % b) != 0) {
		a = b;
		b = rem;
	}
	return b;
}
int main() {
	int a, b, n;
	cin >> a >> b >> n;
	while(true) {
		n -= gcd(a, n);
		if(n == 0) {
			cout << 0 << endl;
			break;
		}
		n -= gcd(b, n);
		if(n == 0) {
			cout << 1 << endl;
			break;
		}
	}
}
