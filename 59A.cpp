#include<bits/stdc++.h>
using namespace std;  
int main() {
	string s;
	int countUpper = 0, countLower = 0;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z')
			++countLower;
		else if(s[i] >= 'A' && s[i] <= 'Z')
			++countUpper;
	}	
	if(countUpper > countLower){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << s;	
	}
	else{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s;	
	}
}
