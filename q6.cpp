#include <iostream>
using namespace std;

void everyprime(int n1, int n2)
{
  int i, j;
  bool isPrime = true;
  cin >> n2;
  for ( j = n1; j<= n2 && j>=n1; j++){
	isPrime = true;
	for(i = 2; i <= (j/2); i++){
		if(j % i == 0){
		isPrime = false;
		break;
		}
	}
	if (isPrime){
	cout << j << "  ";
	}
  }

}
int main() {
	int n1,n2;
	cout << "enter the lower limit and upper limit \n";
	cin >> n1 >> n2;
	everyprime(n1,n2);
	return 0;
}
