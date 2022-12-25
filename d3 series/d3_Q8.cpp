#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float n, sum=0;
  
    cin>>n;
    for(float i=1; i<=n;i++){
        sum= sum+ (i*(i+1)*(i+2));
     
    }
    cout<<sum;
    return 0;
}