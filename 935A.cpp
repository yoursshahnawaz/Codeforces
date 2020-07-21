#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, l, count = 0;
	cin >> n;
	for(int l = 1; l < n; l++) {
		if((n - l) % l == 0)
			count++;
	}
	cout << count;
}
