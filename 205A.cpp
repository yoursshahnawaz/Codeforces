#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, min, index = 0, minCount = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	min = *min_element(arr, arr + n);
	for(int i = 0; i < n; i++) {
		if(arr[i] == min) {
			index = i;
			minCount++;	
		}
	}
	if(minCount > 1)
		cout << "Still Rozdil" << endl;
	else
		cout << index + 1 << endl;
}
