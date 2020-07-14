#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, countA = 0, countB = 0;
	cin >> n;
	string goal, teamA, teamB;
	cin >> teamA;
	++countA;
	--n;
	while(n--) {
		cin >> goal;
		if(goal == teamA)
			countA++;
		else {
			teamB = goal;
			countB++;
		}
	}
	if(countA > countB)
		cout << teamA;
	else
		cout << teamB;
}
