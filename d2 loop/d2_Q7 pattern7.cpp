#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=i;
        while(k>=1){
            cout<<k;
            k--;
        }
        int x=2;
        while(x<=i){
            cout<<x;
            x++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}