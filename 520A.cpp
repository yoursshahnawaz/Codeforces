#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, arr[26] = {0};
	cin >> n;
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i = 0; i < n; i++) {
		arr[str[i] - 97]++;
	}
	for(int i = 0; i < 26; i++) {
		if(arr[i] == 0) {
			cout << "NO";
			return 0;			
		}
	}
	cout << "YES";	
}
