#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, max = -1, S = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] > max)
			max = arr[i];
	}
	for(int i = 0; i < n; i++) {
		S += (max - arr[i]);
	}
	cout << S;
}
