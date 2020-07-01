#include<bits/stdc++.h>
using namespace std;
int main() {
	int limak, bob, count = 0;
	cin >> limak >> bob;
	while(limak <= bob)	{
		limak *= 3;
		bob *= 2;
		count++;
	}
	cout << count;
}
