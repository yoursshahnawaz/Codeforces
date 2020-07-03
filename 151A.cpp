#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, l, c, d, p, nl, np;
	int totalDrinks, totalSlices;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	totalDrinks = k * l;
	totalSlices = c * d;
	int result = min(min((totalDrinks / nl), (totalSlices)), p /np) / n;
	cout << result;
}
