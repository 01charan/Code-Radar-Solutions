#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char str1[100],str2[100];
    scanf("%s %d %s",&a,&str1,&str2);
    printf("Name: %s",str1);
    printf("Age: %d",a);
    printf("Hobby: %s",str2);
    return 0;
}