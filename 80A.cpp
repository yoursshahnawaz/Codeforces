#include<bits/stdc++.h>
using namespace std;

int isNextPrime(int n);
bool isPrime(int num);

int main() {
	int n, m, nextPrime;
	cin >> n >> m;
	nextPrime = isNextPrime(n);
	if(nextPrime == m)
		cout << "YES";
	else
		cout << "NO";
}

int isNextPrime(int n) {
	int nextPrime = n;
	bool found = false;
	while(!found) {
		nextPrime++;
		if(isPrime(nextPrime))
			found = true;
	}
	return nextPrime;
}

bool isPrime(int num) {
	for(int i = 2; i <= num / 2; i++) {
		if(num % i == 0)
			return false;
	}
	return true;
}
