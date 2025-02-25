#include<stdio.h>
int main()
{
    int rows;
    printf("");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (int j = 1; j < (rows - i); j++) {
            printf(" ");
        }
        for (int j=0; j <= i; j++){
           
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
