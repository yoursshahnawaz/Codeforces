#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, event, officers = 0, crimes = 0, count = 0;
	cin >> n;
	while(n--) {
		cin >> event;
		if(event == -1 && officers < 1) {
			count++;
		}
		if(event == -1 && officers > 0) {
			officers--;
		}
		if(event > 0) {
			officers += event;
		}
	}
	cout << count;
}
