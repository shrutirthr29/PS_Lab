#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z') ){
    if((c=='a' || c=='e' || c=='i' || c=='o' || c=='u')|| (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    }
    
    else{
        cout<<"neither vowel nor consonant";
    }
    return 0;
}