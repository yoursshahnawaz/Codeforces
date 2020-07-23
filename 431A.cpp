#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[4], calories = 0;
	string str;
	for(int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	cin >> str;
	for(int i = 0; i < str.length(); i++) {
		if(str[i] == '1')
			calories += arr[0];
		else if(str[i] == '2')
			calories += arr[1];
		else if(str[i] == '3')
			calories += arr[2];
		else if(str[i] == '4')
			calories += arr[3];
	}
	cout << calories;
}
