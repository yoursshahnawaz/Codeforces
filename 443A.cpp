#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int count = 0;
	int arr[26] = {0};
	if(str == "{}") {
		cout << 0;
		return 0;
	}
	for(int i = 1; i < str.size(); i += 3) {
		arr[str[i] - 97] = 1;
	}
	for(int i = 0; i < 26; i++) {
		if(arr[i] == 1)
			++count;
	}
	cout << count;
}
