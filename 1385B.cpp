#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> v;
		set<int> s;
		for(int i = 0; i < 2 * n; i++) {
			cin >> x;
			if(s.count(x))
				continue;
			v.push_back(x);
			s.insert(x);
		}
		for(int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
