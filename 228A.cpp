#include<bits/stdc++.h>
using namespace std;
int main() {
	long first, second, third, fourth, count = 0, noOfShoes = 3;
	cin >> first >> second >> third >> fourth;
	if(first == second)
		++count;
	if(first == third)
		++count;
	if(first == fourth)
		++count;
	if(first != second) {
		if(second == third)
			++count;
		if(second == fourth)
			++count;
	}
	if(first != third) {
		if(third == fourth && second != third)
			++count;
	}
	cout << count;
}
