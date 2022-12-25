#include <iostream>

using namespace std;

void prime(int n){
    int i,c=0;
    for(i=2; i<n; i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<n<<endl;
    }
}

int main()
{
    int n,i;
    cout<<"enter range 1 to "<<endl;
    cin>>n;
    for(i=2; i<=n; i++){
        prime(i);
    }
    return 0;
}


/****************/


#include <iostream>
#include<cmath>

using namespace std;

void prime(int n){
    int i,c=0;
    int x= sqrt(n);
    for(i=2; i<= x; i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
       prime(i);
    }

    return 0;
}