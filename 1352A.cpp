#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, count, k = 0, length = 0;
	cin >> t;
	while(t--) {
		cin >> n;
		count = 0;
		length = std::to_string(n).length();
		int arrOfRound[length] = {0};
		if(n <= 10) {
			cout << 1 << endl;
			cout << n << endl;
		}
		else {
			for(int i = 0; i < length; i++) {
				int rem = n % 10;
				for(int j = 1; j <= i; j++) {
					rem *= 10;
				}
				if(rem != 0)
					count++;
				arrOfRound[i] = rem;
				n /= 10;
			}
			cout << count << endl;
			for(int i = 0; i < length; i++) {
				if(arrOfRound[i] != 0)
					cout << arrOfRound[i] << " ";
			}
			cout << endl;
		}
	}
}
