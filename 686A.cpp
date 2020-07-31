#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	long long x, d, total = 0, count = 0;
	char sign;
	cin >> n >> x;
	total = x;
	while(n--) {
		cin >> sign >> d;
		if(sign == '+') {
			total += d;
		}
		else {
			if(total >= d) {
				total -= d;
			}
			else {
				count += 1;	
			}
		}
	}
	cout << total << " " << count << endl; 
}
