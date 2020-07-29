#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, countOfN = 0, countOfZ = 0;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == 'n')
			countOfN += 1;
		if(str[i] == 'z')
			countOfZ += 1;
	}
	while(countOfN--)
		cout << 1 << " ";
	while(countOfZ--)
		cout << 0 << " ";
}
