#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, l, m, n, d, count = 0;
	cin >> k >> l >> m >> n >> d;
	bool dragon[d];
	for(int i = 0; i < d; i++) {
		dragon[i] = false;
	}
	for(int i = k-1; i < d; i += k) {
		dragon[i] = true;	
	}
	for(int i = l-1; i < d; i += l) {
		dragon[i] = true;	
	}
	for(int i = m-1; i < d; i += m) {
		dragon[i] = true;	
	}
	for(int i = n-1; i < d; i += n) {
		dragon[i] = true;	
	}
	for(int i = 0; i < d; i++) {
		if(dragon[i])
			++count;
	}
	cout << count;
}

