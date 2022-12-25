#include <iostream>
using namespace std;
int min(int arr[], int n){
    int min = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
 
    cout  << min;
 
}
   
int main(){
    int arr[100], n, i;
       
    cin >> n;
     
    
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    min(arr, n); 
    
    return 0;
}