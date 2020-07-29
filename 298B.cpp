#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, sx, sy, ex, ey, time = -1;
	string dir;
	cin >> t >> sx >> sy >> ex >> ey;
	cin >> dir;
	for(int i = 0; i < t; i++) {
		switch(dir[i]) {
			case 'E' : if(sx < ex) {
					sx += 1;
				}
				break;
			case 'S' : if(sy > ey) {
					sy -= 1;
				}
				break;
			case 'W' : if(sx > ex){
					sx -= 1;
				}	
				break;
			case 'N' : if(sy < ey) {
					sy += 1;
				}
				break;
			default : break;
		}
		if(sx == ex && sy == ey) {
			time = i + 1;
			break;
		}
	}
	cout << time << endl;
}
