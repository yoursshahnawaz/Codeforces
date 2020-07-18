#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, seats, j = 0, max = 0, min = 0;
	cin >> n >> m;
	int arr[m];
	for(int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+m);
	seats = arr[0];
	for(int i = 0; i < n; i++) {
		min += seats;
		seats -=1;
		if(seats == 0)
			seats = arr[++j];
	}
	
	sort(arr, arr+m, greater<int>());
	while(n--) {
		max += arr[0];
		arr[0] -= 1;
		for(int i = 1; i < m; i++) {
			if(arr[i] <= arr[i-1])
				break;
			swap(arr[i], arr[i-1]);
		}	
	}
	
	cout << max << " " << min;
}
