#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	bool odd[26] = {false};
	for(int i = 0; i < str.length(); i++) {
		odd[str[i] - 'a'] = !odd[str[i] - 'a'];
	}
	int oddCount = count(odd, odd + sizeof(odd) / sizeof(odd[0]), true);
	cout << (oddCount == 0 || oddCount % 2 == 1 ? "First" : "Second") << endl;
}
