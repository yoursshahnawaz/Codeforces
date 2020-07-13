#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	long long totalTime;
	cin >> n >> m;
	int task[m];
	for(int i = 0; i < m; i++) {
		cin >> task[i];
	}
	totalTime = task[0] - 1;
	for(int i = 0; i < m - 1; i++) {
		if(task[i+1] == 1 && task[i] == n)
			totalTime += 1;
		else if(task[i] <= task[i+1])
			totalTime += task[i+1] - task[i];
		else if(task[i] > task[i+1])
			totalTime += (n - task[i]) + task[i+1]; 
	}
	cout << totalTime;
}
