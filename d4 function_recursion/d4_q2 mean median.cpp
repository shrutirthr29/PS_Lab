#include <iostream>

using namespace std;
void mean(int n){
    int sum=0;
    for(int i=1; i<=5; i++){
        sum=sum+i;
    }
    int mean= sum/5;
    cout<<mean<<endl;
}
void median(int n){
    int median= (n+1)/2;
    cout<<median<<endl;
}

int main()
{
    int n;
    cin>>n;
    mean(n);
    median(n);

    return 0;
}