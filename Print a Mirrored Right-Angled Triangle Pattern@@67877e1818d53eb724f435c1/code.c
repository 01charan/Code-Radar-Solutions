#include<stdio.h>
int main()
{
    for (int i=1;i<=n;i++){
        for (int j=0;j<(n-i);j++){
            printf(" ");
        }
        for (int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}