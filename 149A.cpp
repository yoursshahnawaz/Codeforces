#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, count = 0, total = 0;
	int arr[12];
	cin >> k;
	for(int i = 0; i < 12; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 12, greater<int>());
	for(int i = 0; i < 12; i++) {
		if(total < k) {
			total += arr[i];
			count++;
		}
	}
	if(total < k)
		cout << -1;
	else
		cout << count;
}
