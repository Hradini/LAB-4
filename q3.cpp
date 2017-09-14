#include <iostream>
using namespace std;
int max(int a,int b){
	if ( a > b){
		return a;
	}else {
		return b;
	}
}
int min (int a, int b){
	if ( a > b){
		return b;
	}else {
		return a;
	}
}
int main() {
	int a,b;
	cin >> a>>b;
	cout << "the maximum is " << max(a,b) << "\nthe minimum is " << min(a,b);
	return 0;
}
