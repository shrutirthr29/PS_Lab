#include <iostream>
#include<cmath>
using namespace std;


int main()
{
   int n;
   cin>>n;
 
 
    int d=0, sum=0, digit,m,p;
    m=n;
    p=n;
    while(n!=0){
        d++;
        n=n/10;
    }
    while(m!=0){
        digit= m%10;
        m=m/10;
        sum=sum+ pow(digit,d);
    }
    if(sum==p){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}


/***********/


#include <iostream>
#include<cmath>
using namespace std;
void armstrong(int n){
    int d=0, sum=0, digit,m,p;
    m=n;
    p=n;
    while(n!=0){
        d++;
        n=n/10;
    }
    while(m!=0){
        digit= m%10;
        m=m/10;
        sum=sum+ pow(digit,d);
    }
    if(sum==p){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}

int main()
{
   int n;
   cin>>n;
   armstrong(n);
 
    
    return 0;
}