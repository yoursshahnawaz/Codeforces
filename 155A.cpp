#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, points, min, max, count = 0;
	cin >> n;
	cin >> points;
	max = points;
	min = points;
	--n;
	while(n--) {
		cin >> points;
		if(points > max) {
			max = points;
			++count;
		}
		else if(points < min) {
			min = points;
			++count;
		}
	}
	cout << count;
}

