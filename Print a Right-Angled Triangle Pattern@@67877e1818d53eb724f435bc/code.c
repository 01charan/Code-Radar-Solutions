// Your code here...
#include <stdio.h>
int main()
{
    int rows;
    printf("enter no. of rows:");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("%d\n");
    }
    return 0;
}