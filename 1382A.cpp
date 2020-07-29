#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
		bool subsequence = false;
		int ans = 0;
		cin >> n >> m;
		set<int> s;
		for(int i = 0; i < n ; i++) {
			int x;
			cin >> x;
			s.insert(x);
		}
		for(int i = 0; i < m ; i++) {
			int x;
			cin >> x;
			if(s.count(x)) {
				subsequence = true;
				ans = x;
			}
		}
		if(subsequence) {
			cout << "YES" << endl << 1 << " " << ans << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
