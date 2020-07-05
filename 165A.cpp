#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n][2];
	int i, j, x, y, left, right, up, below, count = 0;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	for(i = 0; i < n; i++) {
		x = arr[i][0];
		y = arr[i][1];
		left = 0, right = 0, up = 0, below = 0;
		for(j = 0; j < n; j++) {
			if(x<arr[j][0] && y==arr[j][1]){
	            right++;
	        }
			else if(x>arr[j][0] && y==arr[j][1]){
	            left++;
	        }
			else if(x==arr[j][0] && y<arr[j][1]){
	            up++;
	        }
			else if(x==arr[j][0] && y>arr[j][1]){
	            below++;
	        }
	        
	        if(left > 0 && right > 0 && up > 0 && below > 0) {
	        	count++;
	        	break;
			}
		}
	}
	cout << count;
}
