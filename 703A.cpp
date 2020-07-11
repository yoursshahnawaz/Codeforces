#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, c, mishkaWon = 0, chrisWon = 0;
	cin >> n;
	while(n--) {
		cin >> m >> c;
		if(m > c)
			++mishkaWon;
		if(c > m)
			++chrisWon;			
	}
	if(mishkaWon > chrisWon)
		cout << "Mishka";
	if(chrisWon > mishkaWon)
		cout << "Chris";
	else if(mishkaWon == chrisWon)
		cout << "Friendship is magic!^^";
}
