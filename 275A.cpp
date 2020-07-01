#include<bits/stdc++.h>
using namespace std;
int main() {
	bool lights[3][3];
	int i, j;
	int input[3][3];
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			lights[i][j] = true;
		}
	}
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			cin >> input[i][j];
		}
	}
	
	if(input[0][0] % 2 != 0) {
		lights[0][0] = !lights[0][0];
		lights[0][1] = !lights[0][1];
		lights[1][0] = !lights[1][0];
	}
	if(input[1][0] % 2 != 0) {
		lights[0][0] = !lights[0][0];
		lights[1][0] = !lights[1][0];
		lights[2][0] = !lights[2][0];
		lights[1][1] = !lights[1][1];
	}
	if(input[2][0] % 2 != 0) {
		lights[2][1] = !lights[2][1];
		lights[1][0] = !lights[1][0];
		lights[2][0] = !lights[2][0];
	}
	if(input[0][1] % 2 != 0) {
		lights[0][0] = !lights[0][0];
		lights[0][1] = !lights[0][1];
		lights[0][2] = !lights[0][2];
		lights[1][1] = !lights[1][1];
	}
	if(input[1][1] % 2 != 0) {
		lights[0][1] = !lights[0][1];
		lights[1][0] = !lights[1][0];
		lights[1][2] = !lights[1][2];
		lights[1][1] = !lights[1][1];
		lights[2][1] = !lights[2][1];
	}
	if(input[2][1] % 2 != 0) {
		lights[2][0] = !lights[2][0];
		lights[2][2] = !lights[2][2];
		lights[1][1] = !lights[1][1];
		lights[2][1] = !lights[2][1];
	}
	if(input[0][2] % 2 != 0) {
		lights[0][1] = !lights[0][1];
		lights[0][2] = !lights[0][2];
		lights[1][2] = !lights[1][2];
	}
	if(input[1][2] % 2 != 0) {
		lights[0][2] = !lights[0][2];
		lights[1][2] = !lights[1][2];
		lights[1][1] = !lights[1][1];
		lights[2][2] = !lights[2][2];
	}
	if(input[2][2] % 2 != 0) {
		lights[2][1] = !lights[2][1];
		lights[2][2] = !lights[2][2];
		lights[1][2] = !lights[1][2];
	}
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(lights[i][j])
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
	}	
}
