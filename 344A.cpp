#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, magnet, prevMagnet, count = 1;
	cin >> n;
	cin >> prevMagnet;
	--n;
	while(n--) {
		cin >> magnet;
		if(magnet == prevMagnet) {
			prevMagnet = magnet;
		} else {
			count++;
			prevMagnet = magnet;
		}
	}
	cout << count;
}
