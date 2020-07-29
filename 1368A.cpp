#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, moves;
	long a, b, n;
	cin >> t;
	while(t--) {
		cin >> a >> b >> n;
		moves = 0;
		while(max(a,b) <= n) {
			if(a <= b)
				a += b;
			else
				b += a;
			moves++;
		}
		cout << moves << endl;
	}
}
