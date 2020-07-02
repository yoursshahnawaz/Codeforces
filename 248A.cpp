#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, left = 0, right = 0, l, r, t;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> l >> r;
		left += l;
		right += r;
	}
	t = min(left, n - left) + min(right, n - right);
	cout << t;
}

