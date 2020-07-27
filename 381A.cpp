#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, score1 = 0, score2 = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int i = 0, j = n - 1, max, player = 0;
	while(i <= j) {
		if(arr[i] >= arr[j]) {
			max = arr[i];
			i++;
		}
		else {
			max = arr[j];
			j--;
		}
		if(player % 2 == 0)
			score1 += max;
		else
			score2 += max;
		player++;
	}
	cout << score1 << " " << score2;
}
