#include <iostream>
using namespace std;

void everyperfect(int l,int u) {
  int n,n1,j,i=1,sum=0;
    for ( j =l;j <=u && j>=l; j++){
	sum =0; i=1;
	  while(i<j){
	         if(j%i==0)
	               sum=sum+i;
	              i++;
	  }
	  if(sum==j)
	         cout << j  <<  " is a perfect number \n";
  }
	
}
int main() {
	int l,u;
	cin >> l>>u;
	everyperfect(l,u);
	return 0;
}
