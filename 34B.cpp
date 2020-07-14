#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, cost, total = 0;
	cin >> n >> m;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0; i < m; i++) {
		if(arr[i] < 0)
			total += abs(arr[i]);
	}
	cout << total;
}
