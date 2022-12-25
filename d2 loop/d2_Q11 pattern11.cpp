#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=n-i){
            cout<<' ';
            k++;
        }
        int l=1;
        while(l<=n-i){
            cout<<' ';
            l++;
        }
        int x=i;
        while(x>=1){
            cout<<x;
            x--;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}