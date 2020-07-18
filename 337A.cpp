#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int arr[m];
	for(int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+m);
	int least = arr[n-1] - arr[0];
	for(int k = 1; k <= m - n; k++) {
		int diff = arr[k+n-1] - arr[k];
		if(diff < least)
			least = diff;
	}
	cout << least;
}
