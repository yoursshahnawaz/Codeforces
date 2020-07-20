#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, diff;
	cin >> t;
	while(t--) {
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];			
		}
		sort(arr, arr+n);
		vector<int> v;
		diff = 0;
		for(int i = 1; i < n; i++) {
			diff = arr[i] - arr[i-1];
			v.push_back(diff);
		}
		sort(v.begin(), v.end());
		cout << v[0] << endl;
	}
}
