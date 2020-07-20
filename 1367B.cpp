#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int arr[n];
		int odd = 0, even = 0;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];		
		}
		for(int i = 0; i < n; i++) {
			if(i % 2 != arr[i] % 2) {
				if(arr[i] % 2 == 1)
					odd++;
				else
					even++;
			}
		}
		if(even != odd)
			cout << -1 << endl;
		else
			cout << even << endl;
	}
}
