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
	cin>>x>>n;
	for(i=0; i<n; i++){
		sum= sum + (pow(x,i)/factorial(i));
	}
	cout<<sum;

	return 0;
}