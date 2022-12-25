#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=i-1){
            cout<<' ';
            k++;
        }
        int x=1;
        while(x<=i-2){
            cout<<' ';
            x++;
        }
        // int l=1;
        // while(l<=n){
        //     if(i==1){
        //         cout<<n;
        //         n--;
        //         i++;
        //     }
        // }
        
        cout<<endl;
        i++;
        
    }
    return 0;
}