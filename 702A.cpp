#include<bits/stdc++.h>
using namespace std;
int main() {
	long long i, n, largest = 1, count = 1;
	cin >> n;
	long long arr[n];
	for(i = 0; i < n; i++)
		cin >> arr[i];
	
	for(i = 1; i < n; i++) {
		if(arr[i] > arr[i-1])
			count++;
		else {
			if(count > largest) 
				largest = count;
			count = 1;
		}
	}
	if(count > largest)
		largest = count;
	cout << largest;
}
