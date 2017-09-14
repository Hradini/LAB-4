#include <iostream>
#include <cmath>
using namespace std;

void prime(int n){
  int  i;
  bool isPrime = true;
  cin >> n;
  for(i = 2; i <= n / 2; ++i){
      if(n % i == 0){
          isPrime = false;
      }
  }
  if (isPrime){
      cout << "This is a prime number \n";
      }
  else{
      cout << "This is not a prime number \n";
      }
}

void armstrong(int num) {
	int n, n1, d,a = 0, p=0;
	cin >> num;
	n = num;
	n1 = num;
	while (n1 !=0){
    	n1 = n1/10;
    	++p;
	}
    	
	while (num >= 10){
		d = num % 10;
		a = a + pow(d,p);
		num /= 10;
	}
	a = a+ pow(num, p);
	
	if ( n == a){
		cout << "the number is an armstrong number \n";
	}else
	cout << "the is not an armstrong number \n";
}
void perfect(int n) {
  int i=1,sum=0;
  cin >> n;
  while(i<n){
         if(n%i==0)
               sum=sum+i;
              i++;
  }
  if(sum==n)
         cout << i  <<  " is a perfect number \n";
  else
         cout << i << " is not a perfect number \n";
	}
int main() {
	int n;
	cin >> n;
	prime (n);
	armstrong (n);
	perfect(n);
	
	
	return 0;
}
