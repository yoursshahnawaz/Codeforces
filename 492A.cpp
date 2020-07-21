#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i = 1, total = 0, level = 0;
	cin >> n;
	while(total <= n) {
		total += (i * (i+1) / 2);
		level++;
		i++;
	}
	cout << level - 1;
}
