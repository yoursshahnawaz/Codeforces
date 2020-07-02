#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, n, value, max = 0, min = 101, maxIndex, minIndex;
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> value;
		if(value > max) {
			max = value;
			maxIndex = i;
		}
		if(value <= min) {
			min = value;
			minIndex = i;
		}
	}
	if(maxIndex > minIndex)
		cout << (maxIndex - 1) + (n - minIndex) - 1;
	else
		cout << (maxIndex - 1) + (n - minIndex);
}

