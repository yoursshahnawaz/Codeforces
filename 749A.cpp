#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if(n % 2) {
		if(n == 3) {
			cout << 1 << endl << 3;
		}
		else {
			n -= 3;
			cout << (n / 2) + 1 << endl;
			for(int i = 0; i < n/2; i++)
				cout << 2 << " ";
			cout << 3;
		}
	} 
	else {
		cout << n / 2 << endl;
		for(int i = 0; i < n/2; i++)
			cout << 2 << " ";
	}
}
