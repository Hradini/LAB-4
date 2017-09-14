#include <iostream>
using namespace std;

void everystrong(int l, int u) {
	int num, n,n1,j, i, f=1, sof=0;
	for(j =l;j >=l && j<=u;j++){
		n=j;
		num=j;
		sof=0;
		while(num !=0){
			f =1;
			n1 = num%10;
			num = num/10;
			for (i=1; i<=n1;i++){
				f=f*i;
				}
			sof = sof + f;
			}
	
		if ( sof == n){
			cout << n << " is a strong number\n";
		}
		
	}		
	}
int main() {
	int l,u;
	cout << "enter the lower limit and upper limit";
	cin >> l>>u;
	everystrong(l,u);
	
	return 0;
}
