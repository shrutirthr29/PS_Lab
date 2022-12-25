#include <iostream>

using namespace std;
void perfect(int n){
    int i,sum=0;
    for(i=1; i<n; i++){
        if(n%i==0){
        sum= sum+i;
        }
    }
    if(sum==n){
        cout<<"perfect";
    }
    else{
        cout<<"not perfect";
    }
}

int main()
{
   int n;
   cin>>n;
   perfect(n);

    return 0;
}