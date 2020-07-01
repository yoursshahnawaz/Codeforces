#include<bits/stdc++.h>
using namespace std;
int main() {
	string str, code;
	cin >> str;
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == '-') {
			if(str[i+1] == '-') {
				code.append("2");
				++i;	
			}
			else {
				code.append("1");
				++i;	
			}
		}			
		else
			code.append("0");
	}
	cout << code;
}
