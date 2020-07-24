#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, moves = 0;
	string original, secret;
	cin >> n >> original >> secret;
	for(int i = 0; i < n; i++) {
		moves += min(10 - abs(original[i] - secret[i]), abs(original[i] - secret[i]));
	}
	cout << moves;
}
