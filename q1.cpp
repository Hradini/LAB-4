#include <iostream>
using namespace std;
 
int cube(int n){
	int c = n*n*n;
	return c;
}
int main() {
	int n,c;
	cin >> n;
	c = cube(n);
	cout << c;
	return 0;
}
