#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, pagesRead = 0, count = 0;
	cin >> n;
	int arr[7];
	for(int i = 0; i < 7; i++)
		cin >> arr[i];
	int i = 0;
	pagesRead = arr[0];
	while(pagesRead < n) {
		i++;
		i %= 7;
		pagesRead += arr[i];
	}
	cout << i + 1 << endl;
}
