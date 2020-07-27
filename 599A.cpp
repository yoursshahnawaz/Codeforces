#include<bits/stdc++.h>
using namespace std;
int main() {
	int d1, d2, d3;
	long long dist1, dist2, dist3, dist4;
	cin >> d1 >> d2 >> d3;
	dist1 = d1 + d3 + d2;
	dist2 = 2 * (d1 + d3);
	dist3 = 2 * (d2 + d1);
	dist4 = 2 * (d2 + d3);
	cout << min(min(min(dist1, dist2), dist3), dist4);
}
