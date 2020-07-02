#include<bits/stdc++.h>
using namespace std;
int main() {
	string first, second, sum;
	cin >> first >> second;
	for(int i = 0; i < first.size(); i++) {
		if((first[i] == '1' && second[i] == '0') || (first[i] == '0' && second[i] == '1')) {
			sum.append("1");
		} else {
			sum.append("0");
		}
	}	
	cout << sum;
}
