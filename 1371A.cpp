#include<bits/stdc++.h>
using namespace std;
int main() {
	long t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if(n % 2)
			cout << (n / 2) + 1 << endl;
		else
			cout << n / 2 << endl;
	}
}
