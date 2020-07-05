#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, finger , sum = 0, noOfWays = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> finger;
		sum += finger;
	}
	for(int i = 1; i <= 5; i++) {
		if((sum + i) % (n + 1) != 1) {
			noOfWays++;
		}
	}
	cout << noOfWays;
}
