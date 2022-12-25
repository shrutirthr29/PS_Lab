#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"origin"<<endl;
    }
    else if(x==0){
        cout<<"y axis"<<endl;;
    }
    else if(x>0 && y>0){
        cout<<"1 quad"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"3 quad"<<endl;;
    }
    else if(x>0 && y<0){
        cout<<"4 quad"<<endl;;
    }
    else if(x<0 && y>0){
        cout<<"2 quad"<<endl;;
    }
    else //if(x==0 && y==0)
    {
        cout<<"x axis"<<endl;
    }
    

    return 0;
}