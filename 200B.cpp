#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	double p, total, result;
	cin >> n;
	t = n;
	while(t--) {
		cin >> p;
		total += p;
	}
	result = total / n;
	std::cout << std::setprecision(12) << std::fixed;
	cout << result;
}

