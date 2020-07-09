#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, count = 0, time = 0;
	cin >> n >> k;
	time = k;
	for(int i = 1; i <= n; i++) {
		time += (5 * i);
		if(time <= 240) {
			count++;
		}
		else
			break;
	}
	cout << count;
}
