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
            char var= 'A' +i-1;
            cout<<var;
            var++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}