#include<bits/stdc++.h>
using namespace std;
int main() {
	int k2, k3, k5, k6;
	int count1, count2, sum = 0;
	cin >> k2 >> k3 >> k5 >> k6;
	count1 = min(min(k5, k6), k2);
	sum += count1 * 256;
	k2 -= count1;
	count2 = min(k2, k3);
	sum += count2 * 32;
	cout << sum;
}
