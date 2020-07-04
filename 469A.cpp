#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, p, q, level;
	cin >> n;
	cin >> p;
	int levelsOfPlayers[n+1] = {0};
	for(int i = 1; i <= p; i++) {
		cin >> level;
		levelsOfPlayers[level]++;
	}
	cin >> q;
	for(int i = 1; i <= q; i++) {
		cin >> level;
		levelsOfPlayers[level]++;
	}
	for(int i = 1; i <= n; i++) {
		if(levelsOfPlayers[i] == 0) {
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
}
