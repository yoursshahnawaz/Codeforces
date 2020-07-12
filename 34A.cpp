#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	int n, diff, minDiff = 1001, first, prev, curr, a, b;
	cin >> n >> first;
	prev = first;
	for(int i = 2; i <= n; i++) {
		cin >> curr;
		diff = abs(curr - prev);
		if(diff < minDiff) {
			minDiff = diff;
			a = i - 1;
			b = i;
		}
		prev = curr;
	}
	diff = abs(first - prev);
	if(diff < minDiff)
		cout << n << " " << 1;
	else
		cout << a << " " << b;

}
