#include<bits/stdc++.h>
using namespace std;
int main() {
	string cardOnTable, str;
	bool flag = false;
	cin >> cardOnTable;
	for(int i = 0; i < 5; i++) {
		cin >> str;
		if(str[0] == cardOnTable[0] || str[1] == cardOnTable[1]) {
			flag = true;
			break;	
		}
	}
	if(flag)
		cout << "YES";
	else
		cout << "NO";
}
