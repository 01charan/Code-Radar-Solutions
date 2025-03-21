#include<stdio.h>
int main()
{
    int n,i,issorted=1;
    printf("");
    scanf("%d",&n);
    int arr[n];
    printf("");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            issorted=0;
            break;
        }
    }
    if (issorted)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;

}