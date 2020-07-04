#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	bool easy = true;
	while(n--) {
		cin >> i;
		if(i == 1) {
			easy = false;
			break;
		}
	}	
	if(easy)
		cout << "EASY";
	else
		cout << "HARD";
}
