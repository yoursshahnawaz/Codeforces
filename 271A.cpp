#include<bits/stdc++.h>
using namespace std;
int main() {
	int y, first, second, third, fourth;
	cin >> y;
	while(true) {
		y += 1;
		first = y / 1000;
		second = y / 100 % 10;
		third = y / 10 % 10;
		fourth = y % 10;
		if(first != second && first != third && first != fourth && second != third && second != fourth && third != fourth)
			break;
	}
	cout << y << endl;
}
