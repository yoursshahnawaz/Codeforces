#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, value, element;
	long long vasya = 0, petya = 0;
	int index[100001];
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> value;
		index[value] = i;
	}
	cin >> m;
	while(m--) {
		cin >> element;		
		vasya += index[element];
		petya += (n + 1 - index[element]);
	}
	cout << vasya << " " << petya;	
}
