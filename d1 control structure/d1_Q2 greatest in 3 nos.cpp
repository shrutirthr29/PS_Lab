#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c && a>b){
        cout<<"Greatest is a "<<a;
    }
    else if(b>c && b>a){
        cout<<"Greatest is b "<<b;
    }
    else{
        cout<<"Greatest is c "<<c;
    }
    return 0;
}