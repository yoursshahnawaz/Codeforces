#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	int dist, rotation = 0;
	dist = abs(str[0] - 'a');
	rotation += min(dist, 26 - dist); 
	for(int i = 0; i < str.size() - 1; i++) {
		dist = abs(str[i] - str[i+1]);
		rotation += min (dist, 26 - dist);
	}
	cout << rotation;
}
