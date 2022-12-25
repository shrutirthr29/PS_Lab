#include<stdio.h>
int multiply(int arr[], int n)
{
    // Complete the function
    int c1=0, c2=0;
    for(int i=0; i<n; i++){
        if(i>=n/2){
            c2= c2+ arr[i];
        }
        else{
            c1= c1+arr[i];
        }
    }
    return c1*c2;
}