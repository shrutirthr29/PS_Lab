#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t<0){
        cout<<"Freezing weather";
    }
    else if(t>0 && t<10){
        cout<<"very cold weather";
    }
    else if(t>10 && t<=20){
        cout<<"cold weather";
    }
    else if(t>20 && t<30){
        cout<<"normal temp";
    }
    else if(t>30 && t<40){
        cout<<"its hot";
    }
    else{
        cout<<"its very hot";
    }
    

    return 0;
}