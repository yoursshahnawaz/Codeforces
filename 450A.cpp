#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, lastChild = 0;
	cin >> n >> m;
	int ai[n + 1];
	queue<int> a, position;
	for(int i = 1; i <= n; i++) {
		cin >> ai[i];
	}
	for(int i = 1; i <=n; i++) {
		a.push(ai[i]);
		position.push(i);
	}
	while(!a.empty()) {
		if(a.front() <= m) {
			a.pop();
			position.pop();
		}
		else {
			a.push(a.front() - m);
			position.push(position.front());
			a.pop();
			position.pop();
		}
		lastChild = position.back();
	}
	cout << lastChild;
}
