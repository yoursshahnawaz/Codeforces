#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, h, m;
	cin >> t;
	while(t--) {
		cin >> h >> m;
		int hour = 23 - h;
		int min = 60 - m;
		int minutesLeft = hour * 60 + min;
		cout << minutesLeft << endl;
	}
}
