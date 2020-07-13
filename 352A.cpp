#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, digit, zeroes = 0, fives = 0;
	cin >> n;
	while(n--) {
		cin >> digit;
		if(digit == 0)
			zeroes++;
		else
			fives++;
	}
	if(fives >= 9 && zeroes > 0) {
		for(int i = 0; i < fives / 9; i++)
			cout << "555555555";
		for(int i = 0; i < zeroes; i++)
			cout << "0";
	}
	else if(zeroes > 0)
		cout << "0";
	else
		cout << "-1";
}
