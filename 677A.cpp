#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, h, height, width = 0;
	cin >> n >> h;
	while(n--) {
		cin >> height;
		if(height > h)
			width += 2;
		else
			width += 1;
	}
	cout << width;
}
