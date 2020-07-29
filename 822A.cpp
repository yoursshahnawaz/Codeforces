#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, minm, fact = 1;
	cin >> a >> b;
	minm = min(a, b);
	for(int i = 1; i <= minm; i++) {
		fact *= i;
	}
	cout << fact;
}
