#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int main()
{
    float n, sum=0,x;
  float sign=1;
  int p=1;
    cin>>x>>n;
    for(float i=1; i<=n;i++){
        sum= sum+ (pow(x,p)/factorial(p))*sign;
      sign= sign*-1;
      p=p+2;
    }
    cout<<sum;
    return 0;
}