#include <stdio.h>

int main()
{
    int i;
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=i; j<=2*i-1; j++){
            
        printf("%d ", j);
        
        }
        printf("\n");
    }

    return 0;
}
