#include<bits/stdc++.h>
using namespace std;
int main() {
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	int noOfCups = a1 + a2 + a3;
	int noOfMedals = b1 + b2 + b3;
	int cupsShelf = (noOfCups + 4) / 5;
	int medalsShelf = (noOfMedals + 9) / 10;
	if((cupsShelf + medalsShelf) <= n)
		cout << "YES";
	else
		cout << "NO";	
}
