#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, ratio = 0, maxRatio = 0, count = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	int b[m];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	sort(b, b + m, greater<int>());
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(b[i] % a[j] == 0) {
				ratio = b[i] / a[j];
				if(ratio > maxRatio) {
					count = 1;
					maxRatio = ratio;
				} 
				else if(ratio == maxRatio)
					count++;
			}
			
		}
	}
	cout << count;
}
