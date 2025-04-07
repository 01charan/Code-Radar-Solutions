#include<stdio.h>
int fib(int n);
void main()
{
    int n,f;
    printf("");
    scanf("%d",&n);
    f=fib(n);
    printf("%d",f);
}
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}