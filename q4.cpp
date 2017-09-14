#include <iostream>
using namespace std;
bool even (int n){
	if ( n % 2 == 0){
		return true;
	} else{ 
	return false;
	}
}
int main() {
	int n;
	cin >> n;
	if (even(n)){
		cout <<"the number is even\n";
	}else{ 
	cout << "the number is odd\n";
	}
	return 0;
}
