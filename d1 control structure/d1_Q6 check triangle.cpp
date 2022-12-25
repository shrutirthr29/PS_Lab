#include <iostream>

using namespace std;

int main()
{
    int a,b,c,tri;
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        if(a==b && a==c){
            cout<<"equilateral";
        }
        else if((a==b && a!=c)|| (b==c && b!=a)|| (c==a && c!=b)){
            cout<<"isosceles";
        }
        else{
            cout<<"scalene";
        }
    }
    else{
        cout<<"Triangle not possible";
    }
    

    return 0;
}