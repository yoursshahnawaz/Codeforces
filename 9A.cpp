#include<bits/stdc++.h>
using namespace std;
int main() {
	int y, w, chance;
	cin >> y >> w;
	chance = 6 - max(y, w) + 1;
	if(chance == 3)
		cout << "1/2";
	else if(chance == 2)
		cout << "1/3";
	else if(chance == 4)
		cout << "2/3";
	else if(chance == 6)
		cout << "1/1";
	else
		cout << chance << "/6";
}
