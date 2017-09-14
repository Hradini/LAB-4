#include <iostream>
using namespace std;

int diameter(float r){
	int d= 2*r;
	return d;
}
float circum (float r){
	float c =2.0*3.14*r;
	return c;
	}
float area (float r){
	float a = 3.14*r*r;
	return a;
}
int main() {
	float r,a,c,d;
	cin >>r;
	a = area(r);
	c = circum(r);
	d = diameter(r);
	cout << "area " << a << "\n circumfernce" << c << "\n diameter" << d <<endl;
	return 0;
}
