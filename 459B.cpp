#include<bits/stdc++.h>
using namespace std;
int main() {
	long long i, j, n, t1 = 0, t2 = 0, maxDiff = 0, count = 0;
	cin >> n;
	long long arr[n];
	for(i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	maxDiff = arr[n-1] - arr[0];
	for(i = 0; i < n; i++) {
		t1 += (arr[i] == arr[0]);
		t2 += (arr[i] == arr[n-1]);
	}
	cout << maxDiff << " ";
	if(maxDiff == 0)
		cout << n * (n - 1) / 2;
	else
		cout << t1 * t2;
}
