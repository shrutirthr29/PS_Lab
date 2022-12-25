#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1; i<=n; i++){
		fact= fact*i;
	}
	return fact;
}
int main() {
	float n,x,i,sum=0;
	int sign=1;
	
	cin>>n;
	for(i=1; i<=n; i++){
		sum= sum + (i/factorial(2*i-1))*sign;
		sign= sign*-1;
		
	}
	cout<<sum;

	return 0;
}