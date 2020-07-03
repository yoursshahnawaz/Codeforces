#include<bits/stdc++.h>
using namespace std;
int main() {
	string guest, host, piledLetters;
	int names[26] = {0}, letters[26] = {0};
	cin >> guest >> host >> piledLetters;
	
	for(int i = 0; i < guest.size(); i++) {
		names[guest[i] - 'A']++;
	}
	for(int i = 0; i < host.size(); i++) {
		names[host[i] - 'A']++;
	}
	for(int i = 0; i < piledLetters.size(); i++) {
		letters[piledLetters[i] - 'A']++;
	}
	for(int i = 0; i < 26; i++) {
		if(names[i] != letters[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
