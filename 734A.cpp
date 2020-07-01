#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, anton = 0, danik = 0;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < n; i++) {
		if(str[i] == 'A')
			++anton;
		else if(str[i] == 'D')
			++danik;
	}
	if(anton > danik)
		cout << "Anton";
	else if(danik > anton)
		cout << "Danik";
	else
		cout << "Friendship";
}
