#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, r, count = 0;
	long long total = 1;
	cin >> k >> r;
	while(true) {
		count++;
		total = k * count;
		if(total % 10 == 0 || total % 10 == r)
			break;
	}
	cout << count;
}
