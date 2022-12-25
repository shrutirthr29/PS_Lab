#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    //totalSal= basic+ hra+ da+ allow- pf;
    //hra=20%   da=50%   allow= 1700:A 1500:B 1300:C,other    pf=11%
    char grade;
    float basic, hra, da, allow, pf, totalSal;
    cin>>basic>>grade;
    hra= 0.2*basic;
    da= 0.5*basic;
    pf= 0.11*basic;
    if(grade=='A'){
        allow= 1700;
    }
    else if(grade=='B'){
        allow= 1500;
    }
    else{
        allow=1300;
    }
    totalSal= basic+ hra+ da+ allow- pf;
    cout<<llround(totalSal)<<endl;
    
    return 0;
}