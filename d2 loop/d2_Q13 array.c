#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int a=n;
    while(n>=0){
        printf("%d ", n);
        n-=5;
    }
    while(n<=a){
        printf("%d ", n);
        n+=5;
    }

    return 0;
}
