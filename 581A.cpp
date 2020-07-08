#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, diffSocks = 0, sameSocks = 0;
	cin >> a >> b;
	diffSocks = min(a, b);
	sameSocks = (max(a, b) - diffSocks) / 2;
	cout << diffSocks << " " << sameSocks;
}
