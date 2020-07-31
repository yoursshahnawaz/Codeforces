#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	int i, j, k, count = 0;
	for(i = 0; i < str.size(); i++) {
		for(j = i+1; j < str.size(); j++) {
			for(k = j+1; k < str.size(); k++) {
				if(str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q')
					count++;
			}
		}
	}
	cout << count;
}
