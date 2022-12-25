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
        for(int j=1; j<=i; j++){
            
            printf("%c", ('A'+n)-j);
        
        }
        printf("\n");
    }

    return 0;
}



    E
   ED
  EDC
 EDCB
EDCBA
