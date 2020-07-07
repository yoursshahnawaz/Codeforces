#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i = 0, size, count = 0;
	cin >> n;
	size = n;
	int homeDress[n], guestDress[n];
	while(n--) {
		cin >> homeDress[i] >> guestDress[i];
		i++;
	}
	for(i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(homeDress[i] == guestDress[j])
				count++;	
		}
	}
	cout << count;
}
