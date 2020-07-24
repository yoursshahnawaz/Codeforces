#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, num, sum;
	cin >> t;
	while(t--) {
		sum = 0;
		bool odd = false, even = false;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> num;
			sum += num;
			odd |= num % 2 != 0;
			even |= num % 2 == 0;
		}
		if(sum % 2 != 0 || (odd && even))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
