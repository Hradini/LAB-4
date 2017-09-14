#include <iostream>
#include <cmath>
using namespace std;

void everyarmstrong(int l, int u) {
	int n2, n, n1, i,d,a = 0, p=0;
		for( i= l; i <=u && i >=l; i++){
		a =0;
		p=0;
		n = i;
		n1 = i;
		while (n1 !=0){
	    	n1 = n1/10;
	    	++p;
		}
		while (n !=0){
			d = n % 10;
			a = a + pow(d,p);
			n /= 10;
		}
		if ( i == a){
			cout << i << endl;
		}
	}
	}
int main() {
	int l,u;
	cout <<"enter the lower and upper limit";
	cin >> l>>u;
	everyarmstrong(l,u);
	
	return 0;
}
