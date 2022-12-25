#include <iostream>

using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

void strong(int n){
    int m=n;
    int sum=0;
    while(m>0){
        int t=m%10;
        sum=sum+fact(t);
        m=m/10;
    }
    if(sum==n){
        cout<<sum<<endl;
}
}
int main()
{
    int n,i;
    cout<<"Enter the range 1 to "<<endl;
    cin>>n;
    for(int i=1; i<n; i++){
        strong(i);
    }

    return 0;
}
