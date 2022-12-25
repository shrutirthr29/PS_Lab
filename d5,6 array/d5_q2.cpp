#include <iostream>
using namespace std;
int max(int arr[], int n){
    int max = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
 
    cout  << max;
 
}
   
int main(){
    int arr[100], n, i;
       
    cin >> n;
     
    
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    max(arr, n); 
    
    return 0;
}