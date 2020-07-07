#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	long long faces = 0;
	string polyhedron;
	cin >> n;
	while(n--) {
		cin >> polyhedron;
		if(polyhedron == "Tetrahedron")
			faces += 4;
		else if(polyhedron == "Cube")
			faces += 6;
		else if(polyhedron == "Octahedron")
			faces += 8;
		else if(polyhedron == "Dodecahedron")
			faces += 12;
		else if(polyhedron == "Icosahedron")
			faces += 20;
	}
	cout << faces;	
}
